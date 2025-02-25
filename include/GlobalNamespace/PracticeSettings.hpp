// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: PracticeSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class PracticeSettings : public ::Il2CppObject {
    public:
    // private System.Single _startSongTime
    // Size: 0x4
    // Offset: 0x10
    float startSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songSpeedMul
    // Size: 0x4
    // Offset: 0x14
    float songSpeedMul;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _startInAdvanceAndClearNotes
    // Size: 0x1
    // Offset: 0x18
    bool startInAdvanceAndClearNotes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: PracticeSettings
    PracticeSettings(float startSongTime_ = {}, float songSpeedMul_ = {}, bool startInAdvanceAndClearNotes_ = {}) noexcept : startSongTime{startSongTime_}, songSpeedMul{songSpeedMul_}, startInAdvanceAndClearNotes{startInAdvanceAndClearNotes_} {}
    // static field const value: static public System.Single kDelayBeforeStart
    static constexpr const float kDelayBeforeStart = 1;
    // Get static field: static public System.Single kDelayBeforeStart
    static float _get_kDelayBeforeStart();
    // Set static field: static public System.Single kDelayBeforeStart
    static void _set_kDelayBeforeStart(float value);
    // Get instance field reference: private System.Single _startSongTime
    float& dyn__startSongTime();
    // Get instance field reference: private System.Single _songSpeedMul
    float& dyn__songSpeedMul();
    // Get instance field reference: private System.Boolean _startInAdvanceAndClearNotes
    bool& dyn__startInAdvanceAndClearNotes();
    // public System.Single get_startSongTime()
    // Offset: 0x11FD944
    float get_startSongTime();
    // public System.Void set_startSongTime(System.Single value)
    // Offset: 0x11FD94C
    void set_startSongTime(float value);
    // public System.Single get_songSpeedMul()
    // Offset: 0x11FD954
    float get_songSpeedMul();
    // public System.Void set_songSpeedMul(System.Single value)
    // Offset: 0x11FD95C
    void set_songSpeedMul(float value);
    // public System.Boolean get_startInAdvanceAndClearNotes()
    // Offset: 0x11FD964
    bool get_startInAdvanceAndClearNotes();
    // public System.Void set_startInAdvanceAndClearNotes(System.Boolean value)
    // Offset: 0x11FD96C
    void set_startInAdvanceAndClearNotes(bool value);
    // static public PracticeSettings get_defaultPracticeSettings()
    // Offset: 0x11FD978
    static GlobalNamespace::PracticeSettings* get_defaultPracticeSettings();
    // public System.Void .ctor(PracticeSettings practiceSettings)
    // Offset: 0x11FDA04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PracticeSettings* New_ctor(GlobalNamespace::PracticeSettings* practiceSettings) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PracticeSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PracticeSettings*, creationType>(practiceSettings)));
    }
    // public System.Void .ctor(System.Single startSongTime, System.Single songSpeedMul)
    // Offset: 0x11F8878
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PracticeSettings* New_ctor(float startSongTime, float songSpeedMul) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PracticeSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PracticeSettings*, creationType>(startSongTime, songSpeedMul)));
    }
    // public System.Void ResetToDefault()
    // Offset: 0x11FD9EC
    void ResetToDefault();
    // public System.Void .ctor()
    // Offset: 0x11F51B0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PracticeSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PracticeSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PracticeSettings*, creationType>()));
    }
  }; // PracticeSettings
  #pragma pack(pop)
  static check_size<sizeof(PracticeSettings), 24 + sizeof(bool)> __GlobalNamespace_PracticeSettingsSizeCheck;
  static_assert(sizeof(PracticeSettings) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PracticeSettings*, "", "PracticeSettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PracticeSettings::get_startSongTime
// Il2CppName: get_startSongTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PracticeSettings::*)()>(&GlobalNamespace::PracticeSettings::get_startSongTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PracticeSettings*), "get_startSongTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PracticeSettings::set_startSongTime
// Il2CppName: set_startSongTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PracticeSettings::*)(float)>(&GlobalNamespace::PracticeSettings::set_startSongTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PracticeSettings*), "set_startSongTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PracticeSettings::get_songSpeedMul
// Il2CppName: get_songSpeedMul
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PracticeSettings::*)()>(&GlobalNamespace::PracticeSettings::get_songSpeedMul)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PracticeSettings*), "get_songSpeedMul", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PracticeSettings::set_songSpeedMul
// Il2CppName: set_songSpeedMul
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PracticeSettings::*)(float)>(&GlobalNamespace::PracticeSettings::set_songSpeedMul)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PracticeSettings*), "set_songSpeedMul", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PracticeSettings::get_startInAdvanceAndClearNotes
// Il2CppName: get_startInAdvanceAndClearNotes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PracticeSettings::*)()>(&GlobalNamespace::PracticeSettings::get_startInAdvanceAndClearNotes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PracticeSettings*), "get_startInAdvanceAndClearNotes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PracticeSettings::set_startInAdvanceAndClearNotes
// Il2CppName: set_startInAdvanceAndClearNotes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PracticeSettings::*)(bool)>(&GlobalNamespace::PracticeSettings::set_startInAdvanceAndClearNotes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PracticeSettings*), "set_startInAdvanceAndClearNotes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PracticeSettings::get_defaultPracticeSettings
// Il2CppName: get_defaultPracticeSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PracticeSettings* (*)()>(&GlobalNamespace::PracticeSettings::get_defaultPracticeSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PracticeSettings*), "get_defaultPracticeSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PracticeSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PracticeSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PracticeSettings::ResetToDefault
// Il2CppName: ResetToDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PracticeSettings::*)()>(&GlobalNamespace::PracticeSettings::ResetToDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PracticeSettings*), "ResetToDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PracticeSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
