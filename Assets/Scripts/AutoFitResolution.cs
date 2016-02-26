using UnityEngine;
using System.Collections;

public class AutoFitResolution : MonoBehaviour {

	public const float BASE_WIDTH = 800;
	public const float BASE_HEIGHT = 600;

	private float _baseHeightInverted;

	private float _originalPixelInsetWidth;
	private float _originalPixelInsetHeight;

	private GUITexture _guiTextureRef;

	void Awake()
	{
		_guiTextureRef = transform.GetComponent<GUITexture>();

		Debug.Log (_guiTextureRef);
	}

	void Start() 
	{
		_baseHeightInverted = 1/BASE_HEIGHT;
		_originalPixelInsetWidth = _guiTextureRef.pixelInset.width;
		_originalPixelInsetHeight = _guiTextureRef.pixelInset.height;
	}

	void FixedUpdate() 
	{    
		float ratio = Screen.height * _baseHeightInverted;        

		_guiTextureRef.pixelInset = new Rect(0, 0, _originalPixelInsetWidth * ratio, _originalPixelInsetHeight * ratio);
	}
}
