// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_PipelineType
  struct HEU_PipelineType;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_RenderingPipelineDefines
  class HEU_RenderingPipelineDefines;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_RenderingPipelineDefines);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_RenderingPipelineDefines*, "HoudiniEngineUnity", "HEU_RenderingPipelineDefines");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_RenderingPipelineDefines
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_RenderingPipelineDefines : public ::Il2CppObject {
    public:
    // static private System.Void .cctor()
    // Offset: 0x1B0D138
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1B0D45C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_RenderingPipelineDefines* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_RenderingPipelineDefines::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_RenderingPipelineDefines*, creationType>()));
    }
    // static private System.Void UpdateDefines()
    // Offset: 0x1B0D13C
    static void UpdateDefines();
    // static public HoudiniEngineUnity.HEU_PipelineType GetPipeline()
    // Offset: 0x1B09D94
    static ::HoudiniEngineUnity::HEU_PipelineType GetPipeline();
    // static private System.Void AddDefine(System.String define)
    // Offset: 0x1B0D25C
    static void AddDefine(::StringW define);
    // static public System.Void RemoveDefine(System.String define)
    // Offset: 0x1B0D328
    static void RemoveDefine(::StringW define);
    // static public System.Collections.Generic.List`1<System.String> GetDefines()
    // Offset: 0x1B0D3F4
    static ::System::Collections::Generic::List_1<::StringW>* GetDefines();
    // static public System.Void SetDefines(System.Collections.Generic.List`1<System.String> definesList)
    // Offset: 0x1B0D458
    static void SetDefines(::System::Collections::Generic::List_1<::StringW>* definesList);
  }; // HoudiniEngineUnity.HEU_RenderingPipelineDefines
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_RenderingPipelineDefines::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_RenderingPipelineDefines::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_RenderingPipelineDefines*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_RenderingPipelineDefines::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_RenderingPipelineDefines::UpdateDefines
// Il2CppName: UpdateDefines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_RenderingPipelineDefines::UpdateDefines)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_RenderingPipelineDefines*), "UpdateDefines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_RenderingPipelineDefines::GetPipeline
// Il2CppName: GetPipeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_PipelineType (*)()>(&HoudiniEngineUnity::HEU_RenderingPipelineDefines::GetPipeline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_RenderingPipelineDefines*), "GetPipeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_RenderingPipelineDefines::AddDefine
// Il2CppName: AddDefine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&HoudiniEngineUnity::HEU_RenderingPipelineDefines::AddDefine)> {
  static const MethodInfo* get() {
    static auto* define = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_RenderingPipelineDefines*), "AddDefine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{define});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_RenderingPipelineDefines::RemoveDefine
// Il2CppName: RemoveDefine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&HoudiniEngineUnity::HEU_RenderingPipelineDefines::RemoveDefine)> {
  static const MethodInfo* get() {
    static auto* define = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_RenderingPipelineDefines*), "RemoveDefine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{define});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_RenderingPipelineDefines::GetDefines
// Il2CppName: GetDefines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)()>(&HoudiniEngineUnity::HEU_RenderingPipelineDefines::GetDefines)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_RenderingPipelineDefines*), "GetDefines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_RenderingPipelineDefines::SetDefines
// Il2CppName: SetDefines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::StringW>*)>(&HoudiniEngineUnity::HEU_RenderingPipelineDefines::SetDefines)> {
  static const MethodInfo* get() {
    static auto* definesList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_RenderingPipelineDefines*), "SetDefines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{definesList});
  }
};
