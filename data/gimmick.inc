@ ===========================================================
@ Gimmick Move Battle Scripts
@ data/battle_scripts/gimmick.inc
@ ===========================================================

@ Called by HandleAction_UseGimmickMove in battle_main.c
BattleScript_GimmickMove::
    attackcanceler
    accuracycheck BattleScript_GimmickMoveMissed, ACC_CURR_MOVE
    attackstring
    critcalc
    damagecalc
    typecalc
    adjustnormaldamage
    attackanimation
    waitanimation
    effectivenesssound
    hitanimation BS_TARGET
    waitanimation
    healthbarupdate BS_TARGET
    datahpupdate BS_TARGET
    critmessage
    waitmessage B_WAIT_TIME_LONG
    resultmessage
    waitmessage B_WAIT_TIME_LONG
    end2

BattleScript_GimmickMoveMissed::
    printstring STRINGID_ATTACKMISSED
    waitmessage B_WAIT_TIME_LONG
    end2

@ Called if gimmick move is MOVE_NONE or already used
BattleScript_GimmickMoveFailed::
    printstring STRINGID_BUTITFAILED
    waitmessage B_WAIT_TIME_LONG
    end
