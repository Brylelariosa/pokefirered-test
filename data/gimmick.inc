@ ===========================================================
@ Gimmick Move Battle Scripts
@ data/battle_scripts/gimmick.inc
@ ===========================================================

@ Called by HandleAction_UseGimmickMove in battle_main.c
BattleScript_GimmickMove::
    @ Print "[MON] used [MOVE]!" message
    printstring STRINGID_USEDMOVE
    waitmessage B_WAIT_TIME_LONG

    @ Play move animation on attacker
    attackanimation
    waitanimation

    @ Deal damage / apply effect like a normal move
    effectivenesssound
    hitanimation BS_TARGET
    waitanimation

    @ Deduct HP
    healthbarupdate BS_TARGET
    datahpupdate BS_TARGET
    critmessage
    waitmessage B_WAIT_TIME_LONG

    @ Show effectiveness message (super effective / not very effective)
    resultmessage
    waitmessage B_WAIT_TIME_LONG

    @ End turn
    end

@ Called if gimmick move is MOVE_NONE or already used
BattleScript_GimmickMoveFailed::
    printstring STRINGID_BUTITFAILED
    waitmessage B_WAIT_TIME_LONG
    end
