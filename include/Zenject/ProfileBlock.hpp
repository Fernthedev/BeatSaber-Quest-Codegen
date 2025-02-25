// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ProfileBlock
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class ProfileBlock : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: ProfileBlock
    ProfileBlock() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Get static field: static private System.Text.RegularExpressions.Regex <ProfilePattern>k__BackingField
    static System::Text::RegularExpressions::Regex* _get_$ProfilePattern$k__BackingField();
    // Set static field: static private System.Text.RegularExpressions.Regex <ProfilePattern>k__BackingField
    static void _set_$ProfilePattern$k__BackingField(System::Text::RegularExpressions::Regex* value);
    // static public System.Text.RegularExpressions.Regex get_ProfilePattern()
    // Offset: 0x171DF6C
    static System::Text::RegularExpressions::Regex* get_ProfilePattern();
    // static public System.Void set_ProfilePattern(System.Text.RegularExpressions.Regex value)
    // Offset: 0x171DFBC
    static void set_ProfilePattern(System::Text::RegularExpressions::Regex* value);
    // private System.Void .ctor(System.String sampleName, System.Boolean rootBlock)
    // Offset: 0x171DF5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProfileBlock* New_ctor(::Il2CppString* sampleName, bool rootBlock) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ProfileBlock::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProfileBlock*, creationType>(sampleName, rootBlock)));
    }
    // private System.Void .ctor(System.String sampleName)
    // Offset: 0x171DF64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProfileBlock* New_ctor(::Il2CppString* sampleName) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ProfileBlock::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProfileBlock*, creationType>(sampleName)));
    }
    // static public Zenject.ProfileBlock Start()
    // Offset: 0x171E010
    static Zenject::ProfileBlock* Start();
    // static public Zenject.ProfileBlock Start(System.String sampleNameFormat, System.Object obj1, System.Object obj2)
    // Offset: 0x171E018
    static Zenject::ProfileBlock* Start(::Il2CppString* sampleNameFormat, ::Il2CppObject* obj1, ::Il2CppObject* obj2);
    // static public Zenject.ProfileBlock Start(System.String sampleNameFormat, System.Object obj)
    // Offset: 0x171E020
    static Zenject::ProfileBlock* Start(::Il2CppString* sampleNameFormat, ::Il2CppObject* obj);
    // static public Zenject.ProfileBlock Start(System.String sampleName)
    // Offset: 0x171E028
    static Zenject::ProfileBlock* Start(::Il2CppString* sampleName);
    // public System.Void Dispose()
    // Offset: 0x171E030
    void Dispose();
  }; // Zenject.ProfileBlock
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ProfileBlock*, "Zenject", "ProfileBlock");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ProfileBlock::get_ProfilePattern
// Il2CppName: get_ProfilePattern
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::Regex* (*)()>(&Zenject::ProfileBlock::get_ProfilePattern)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProfileBlock*), "get_ProfilePattern", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ProfileBlock::set_ProfilePattern
// Il2CppName: set_ProfilePattern
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Text::RegularExpressions::Regex*)>(&Zenject::ProfileBlock::set_ProfilePattern)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "Regex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProfileBlock*), "set_ProfilePattern", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::ProfileBlock::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ProfileBlock::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ProfileBlock::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ProfileBlock* (*)()>(&Zenject::ProfileBlock::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProfileBlock*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ProfileBlock::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ProfileBlock* (*)(::Il2CppString*, ::Il2CppObject*, ::Il2CppObject*)>(&Zenject::ProfileBlock::Start)> {
  static const MethodInfo* get() {
    static auto* sampleNameFormat = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* obj1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* obj2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProfileBlock*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sampleNameFormat, obj1, obj2});
  }
};
// Writing MetadataGetter for method: Zenject::ProfileBlock::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ProfileBlock* (*)(::Il2CppString*, ::Il2CppObject*)>(&Zenject::ProfileBlock::Start)> {
  static const MethodInfo* get() {
    static auto* sampleNameFormat = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProfileBlock*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sampleNameFormat, obj});
  }
};
// Writing MetadataGetter for method: Zenject::ProfileBlock::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ProfileBlock* (*)(::Il2CppString*)>(&Zenject::ProfileBlock::Start)> {
  static const MethodInfo* get() {
    static auto* sampleName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProfileBlock*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sampleName});
  }
};
// Writing MetadataGetter for method: Zenject::ProfileBlock::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProfileBlock::*)()>(&Zenject::ProfileBlock::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProfileBlock*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
