using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Settings_Page : MonoBehaviour
{
	[SerializeField] 
    private TMP_Text card_text;
    // Start is called before the first frame update
    void Start()
    {
        card_text.text = "**** **** **** " + Data.card_Last_Four.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
