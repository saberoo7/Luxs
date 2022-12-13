//
//  ViewController.swift
//  Luxs
//
//  Created by Otakhon Toshpulatov on 11/12/22.
//
//imageLiteral
import UIKit

class ViewController: UIViewController {

    
    @IBOutlet weak var image1: UIImageView!
    
    @IBOutlet weak var image2: UIImageView!
    
    @IBOutlet weak var walp: UIImageView!
    @IBAction func button(_ sender: UIButton) {
        
        let arr = [#imageLiteral(resourceName: "dice6") , #imageLiteral(resourceName: "dice5"), #imageLiteral(resourceName: "dice4"), #imageLiteral(resourceName: "dice3"), #imageLiteral(resourceName: "dice2"), #imageLiteral(resourceName: "dice1")]
        // Who.what
        image1.image = arr.randomElement()
        image2.image = arr.randomElement()
        
        let zed = [#imageLiteral(resourceName: "24119"), #imageLiteral(resourceName: "images"), #imageLiteral(resourceName: "images-1"), #imageLiteral(resourceName: "BIRD-FLYING-HD") ] 
        walp.image = zed.randomElement()
        
    }
    
    }

 


