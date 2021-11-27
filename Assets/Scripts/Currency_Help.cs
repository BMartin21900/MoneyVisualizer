using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Events;

[RequireComponent(typeof(Dropdown))]
public class Currency_Help : MonoBehaviour{

	public string inputText;
	[SerializeField]
	public TMP_InputField inputField;
	[SerializeField]
	public GameObject USD_prefab;
	[SerializeField]
	public GameObject pesos_prefab;
	[SerializeField]
	public Text status_text;
	
	// 0: USD
	// 1: Pesos
	// 2: URos
	public int startC = 0;
	public int targetC = 0;
	

	[SerializeField]
	public Dropdown _dropdown_start;

	[SerializeField]
	public Dropdown _dropdown;

    public void loadAR(){
		inputText = inputField.text;
		int start_amount = int.Parse(inputText);
		Data.dropNumber = currencyExchange(startC, targetC, start_amount);
		//Debug.Log(startC);
		//Debug.Log(targetC);
		Debug.Log(Data.targetCurrency);
		Debug.Log(Data.dropNumber);
        SceneManager.LoadScene(1);
    }

	public void updateText(){
		int start_amount = int.Parse(inputField.text);
		int target_amount = currencyExchange(startC, targetC, start_amount);
		string startC_s = "";
		string targetC_s = "";
		if (startC==0){
			startC_s = " USD is ";
		} else {
			startC_s = " Pesos is ";
		}

		if (targetC==0){
			targetC_s = " USD";
		} else {
			targetC_s = " Pesos";
		}

		status_text.text = start_amount + startC_s + target_amount + targetC_s;
	}
	
	// will return the amount needed in the target currency
	public int currencyExchange(int startC, int targetC, int amount){
		if (startC == targetC){
			if (startC == 0){
				Data.targetCurrency = USD_prefab;
			} else {
				Data.targetCurrency = pesos_prefab;
			}
			return amount;
		} else {
			if (startC == 0 && targetC == 1) {
				Data.targetCurrency = pesos_prefab;
				return amount * 22;
			}
			if (startC == 1 && targetC == 0) {
				Data.targetCurrency = USD_prefab;
				return amount / 22;
			}
		}
		return 0;
	}
	
	public void getStartCurrency(int value){
		startC = _dropdown_start.value; //TODO: this is wrong
	}
	
	public void getTargetCurrency(int value){
		targetC = _dropdown.value;
	}
	
    // Start is called before the first frame update
    void Start(){
		_dropdown_start.value = Data.defaultCurrency;
		startC = Data.defaultCurrency;
		//Debug.Log(Data.defaultCurrency);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
