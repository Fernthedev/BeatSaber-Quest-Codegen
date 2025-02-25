// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.HelpURLAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DB52D8
  // [UsedByNativeCodeAttribute] Offset: DB52D8
  class HelpURLAttribute : public System::Attribute {
    public:
    // readonly System.String m_Url
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_Url;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: HelpURLAttribute
    HelpURLAttribute(::Il2CppString* m_Url_ = {}) noexcept : m_Url{m_Url_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_Url;
    }
    // Get instance field reference: readonly System.String m_Url
    ::Il2CppString*& dyn_m_Url();
    // public System.Void .ctor(System.String url)
    // Offset: 0x1C5A304
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HelpURLAttribute* New_ctor(::Il2CppString* url) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::HelpURLAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HelpURLAttribute*, creationType>(url)));
    }
  }; // UnityEngine.HelpURLAttribute
  #pragma pack(pop)
  static check_size<sizeof(HelpURLAttribute), 16 + sizeof(::Il2CppString*)> __UnityEngine_HelpURLAttributeSizeCheck;
  static_assert(sizeof(HelpURLAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HelpURLAttribute*, "UnityEngine", "HelpURLAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::HelpURLAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
