// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MockPlayerMovementType
#include "GlobalNamespace/MockPlayerMovementType.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MockPlayerSettings
  class MockPlayerSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MockPlayerSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerSettings*, "", "MockPlayerSettings");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: MockPlayerSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class MockPlayerSettings : public ::Il2CppObject {
    public:
    public:
    // private System.String _userName
    // Size: 0x8
    // Offset: 0x10
    ::StringW userName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _userId
    // Size: 0x8
    // Offset: 0x18
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 _sortIndex
    // Size: 0x4
    // Offset: 0x20
    int sortIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _latency
    // Size: 0x4
    // Offset: 0x24
    float latency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _autoConnect
    // Size: 0x1
    // Offset: 0x28
    bool autoConnect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _inactiveByDefault
    // Size: 0x1
    // Offset: 0x29
    bool inactiveByDefault;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: inactiveByDefault and: movementType
    char __padding5[0x2] = {};
    // private MockPlayerMovementType _movementType
    // Size: 0x4
    // Offset: 0x2C
    ::GlobalNamespace::MockPlayerMovementType movementType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MockPlayerMovementType) == 0x4);
    // private System.String _recodingFile
    // Size: 0x8
    // Offset: 0x30
    ::StringW recodingFile;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Single _aiCubeHitChance
    // Size: 0x4
    // Offset: 0x38
    float aiCubeHitChance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0x10EB460
    // private System.Boolean _leftHanded
    // Size: 0x1
    // Offset: 0x3C
    bool leftHanded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: leftHanded and: saberAColor
    char __padding9[0x3] = {};
    // private UnityEngine.Color _saberAColor
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color saberAColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _saberBColor
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Color saberBColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _obstaclesColor
    // Size: 0x10
    // Offset: 0x60
    ::UnityEngine::Color obstaclesColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: private System.String _userName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__userName();
    // Get instance field reference: private System.String _userId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__userId();
    // Get instance field reference: private System.Int32 _sortIndex
    [[deprecated("Use field access instead!")]] int& dyn__sortIndex();
    // Get instance field reference: private System.Single _latency
    [[deprecated("Use field access instead!")]] float& dyn__latency();
    // Get instance field reference: private System.Boolean _autoConnect
    [[deprecated("Use field access instead!")]] bool& dyn__autoConnect();
    // Get instance field reference: private System.Boolean _inactiveByDefault
    [[deprecated("Use field access instead!")]] bool& dyn__inactiveByDefault();
    // Get instance field reference: private MockPlayerMovementType _movementType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MockPlayerMovementType& dyn__movementType();
    // Get instance field reference: private System.String _recodingFile
    [[deprecated("Use field access instead!")]] ::StringW& dyn__recodingFile();
    // Get instance field reference: private System.Single _aiCubeHitChance
    [[deprecated("Use field access instead!")]] float& dyn__aiCubeHitChance();
    // Get instance field reference: private System.Boolean _leftHanded
    [[deprecated("Use field access instead!")]] bool& dyn__leftHanded();
    // Get instance field reference: private UnityEngine.Color _saberAColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__saberAColor();
    // Get instance field reference: private UnityEngine.Color _saberBColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__saberBColor();
    // Get instance field reference: private UnityEngine.Color _obstaclesColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__obstaclesColor();
    // public System.String get_userName()
    // Offset: 0x13EDCE4
    ::StringW get_userName();
    // public System.Void set_userName(System.String value)
    // Offset: 0x13EDCEC
    void set_userName(::StringW value);
    // public System.String get_userId()
    // Offset: 0x13EDCF4
    ::StringW get_userId();
    // public System.Void set_userId(System.String value)
    // Offset: 0x13EDCFC
    void set_userId(::StringW value);
    // public System.Int32 get_sortIndex()
    // Offset: 0x13EDD04
    int get_sortIndex();
    // public System.Void set_sortIndex(System.Int32 value)
    // Offset: 0x13EDD0C
    void set_sortIndex(int value);
    // public System.Single get_latency()
    // Offset: 0x13EDD14
    float get_latency();
    // public System.Void set_latency(System.Single value)
    // Offset: 0x13EDD1C
    void set_latency(float value);
    // public System.Boolean get_autoConnect()
    // Offset: 0x13EDD24
    bool get_autoConnect();
    // public System.Void set_autoConnect(System.Boolean value)
    // Offset: 0x13EDD2C
    void set_autoConnect(bool value);
    // public System.Boolean get_inactiveByDefault()
    // Offset: 0x13EDD38
    bool get_inactiveByDefault();
    // public System.Void set_inactiveByDefault(System.Boolean value)
    // Offset: 0x13EDD40
    void set_inactiveByDefault(bool value);
    // public MockPlayerMovementType get_movementType()
    // Offset: 0x13EDD4C
    ::GlobalNamespace::MockPlayerMovementType get_movementType();
    // public System.Void set_movementType(MockPlayerMovementType value)
    // Offset: 0x13EDD54
    void set_movementType(::GlobalNamespace::MockPlayerMovementType value);
    // public System.String get_recodingFile()
    // Offset: 0x13EDD5C
    ::StringW get_recodingFile();
    // public System.Void set_recodingFile(System.String value)
    // Offset: 0x13EDD64
    void set_recodingFile(::StringW value);
    // public System.Single get_aiCubeHitChance()
    // Offset: 0x13EDD6C
    float get_aiCubeHitChance();
    // public System.Void set_aiCubeHitChance(System.Single value)
    // Offset: 0x13EDD74
    void set_aiCubeHitChance(float value);
    // public System.Boolean get_leftHanded()
    // Offset: 0x13EDD7C
    bool get_leftHanded();
    // public System.Void set_leftHanded(System.Boolean value)
    // Offset: 0x13EDD84
    void set_leftHanded(bool value);
    // public UnityEngine.Color get_saberAColor()
    // Offset: 0x13EDD90
    ::UnityEngine::Color get_saberAColor();
    // public System.Void set_saberAColor(UnityEngine.Color value)
    // Offset: 0x13EDD9C
    void set_saberAColor(::UnityEngine::Color value);
    // public UnityEngine.Color get_saberBColor()
    // Offset: 0x13EDDA8
    ::UnityEngine::Color get_saberBColor();
    // public System.Void set_saberBColor(UnityEngine.Color value)
    // Offset: 0x13EDDB4
    void set_saberBColor(::UnityEngine::Color value);
    // public UnityEngine.Color get_obstaclesColor()
    // Offset: 0x13EDDC0
    ::UnityEngine::Color get_obstaclesColor();
    // public System.Void set_obstaclesColor(UnityEngine.Color value)
    // Offset: 0x13EDDCC
    void set_obstaclesColor(::UnityEngine::Color value);
    // public System.Void .ctor()
    // Offset: 0x13EDDD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockPlayerSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MockPlayerSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockPlayerSettings*, creationType>()));
    }
  }; // MockPlayerSettings
  #pragma pack(pop)
  static check_size<sizeof(MockPlayerSettings), 96 + sizeof(::UnityEngine::Color)> __GlobalNamespace_MockPlayerSettingsSizeCheck;
  static_assert(sizeof(MockPlayerSettings) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MockPlayerSettings::*)()>(&GlobalNamespace::MockPlayerSettings::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::set_userName
// Il2CppName: set_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerSettings::*)(::StringW)>(&GlobalNamespace::MockPlayerSettings::set_userName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "set_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MockPlayerSettings::*)()>(&GlobalNamespace::MockPlayerSettings::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::set_userId
// Il2CppName: set_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerSettings::*)(::StringW)>(&GlobalNamespace::MockPlayerSettings::set_userId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "set_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::get_sortIndex
// Il2CppName: get_sortIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MockPlayerSettings::*)()>(&GlobalNamespace::MockPlayerSettings::get_sortIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "get_sortIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::set_sortIndex
// Il2CppName: set_sortIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerSettings::*)(int)>(&GlobalNamespace::MockPlayerSettings::set_sortIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "set_sortIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::get_latency
// Il2CppName: get_latency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MockPlayerSettings::*)()>(&GlobalNamespace::MockPlayerSettings::get_latency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "get_latency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::set_latency
// Il2CppName: set_latency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerSettings::*)(float)>(&GlobalNamespace::MockPlayerSettings::set_latency)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "set_latency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::get_autoConnect
// Il2CppName: get_autoConnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MockPlayerSettings::*)()>(&GlobalNamespace::MockPlayerSettings::get_autoConnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "get_autoConnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::set_autoConnect
// Il2CppName: set_autoConnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerSettings::*)(bool)>(&GlobalNamespace::MockPlayerSettings::set_autoConnect)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "set_autoConnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::get_inactiveByDefault
// Il2CppName: get_inactiveByDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MockPlayerSettings::*)()>(&GlobalNamespace::MockPlayerSettings::get_inactiveByDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "get_inactiveByDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::set_inactiveByDefault
// Il2CppName: set_inactiveByDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerSettings::*)(bool)>(&GlobalNamespace::MockPlayerSettings::set_inactiveByDefault)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "set_inactiveByDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::get_movementType
// Il2CppName: get_movementType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MockPlayerMovementType (GlobalNamespace::MockPlayerSettings::*)()>(&GlobalNamespace::MockPlayerSettings::get_movementType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "get_movementType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::set_movementType
// Il2CppName: set_movementType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerSettings::*)(::GlobalNamespace::MockPlayerMovementType)>(&GlobalNamespace::MockPlayerSettings::set_movementType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "MockPlayerMovementType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "set_movementType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::get_recodingFile
// Il2CppName: get_recodingFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MockPlayerSettings::*)()>(&GlobalNamespace::MockPlayerSettings::get_recodingFile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "get_recodingFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::set_recodingFile
// Il2CppName: set_recodingFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerSettings::*)(::StringW)>(&GlobalNamespace::MockPlayerSettings::set_recodingFile)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "set_recodingFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::get_aiCubeHitChance
// Il2CppName: get_aiCubeHitChance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MockPlayerSettings::*)()>(&GlobalNamespace::MockPlayerSettings::get_aiCubeHitChance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "get_aiCubeHitChance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::set_aiCubeHitChance
// Il2CppName: set_aiCubeHitChance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerSettings::*)(float)>(&GlobalNamespace::MockPlayerSettings::set_aiCubeHitChance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "set_aiCubeHitChance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::get_leftHanded
// Il2CppName: get_leftHanded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MockPlayerSettings::*)()>(&GlobalNamespace::MockPlayerSettings::get_leftHanded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "get_leftHanded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::set_leftHanded
// Il2CppName: set_leftHanded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerSettings::*)(bool)>(&GlobalNamespace::MockPlayerSettings::set_leftHanded)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "set_leftHanded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::get_saberAColor
// Il2CppName: get_saberAColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::MockPlayerSettings::*)()>(&GlobalNamespace::MockPlayerSettings::get_saberAColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "get_saberAColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::set_saberAColor
// Il2CppName: set_saberAColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerSettings::*)(::UnityEngine::Color)>(&GlobalNamespace::MockPlayerSettings::set_saberAColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "set_saberAColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::get_saberBColor
// Il2CppName: get_saberBColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::MockPlayerSettings::*)()>(&GlobalNamespace::MockPlayerSettings::get_saberBColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "get_saberBColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::set_saberBColor
// Il2CppName: set_saberBColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerSettings::*)(::UnityEngine::Color)>(&GlobalNamespace::MockPlayerSettings::set_saberBColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "set_saberBColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::get_obstaclesColor
// Il2CppName: get_obstaclesColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::MockPlayerSettings::*)()>(&GlobalNamespace::MockPlayerSettings::get_obstaclesColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "get_obstaclesColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::set_obstaclesColor
// Il2CppName: set_obstaclesColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerSettings::*)(::UnityEngine::Color)>(&GlobalNamespace::MockPlayerSettings::set_obstaclesColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerSettings*), "set_obstaclesColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
