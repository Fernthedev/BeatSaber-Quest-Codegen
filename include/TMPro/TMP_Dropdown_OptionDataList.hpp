// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_Dropdown
#include "TMPro/TMP_Dropdown.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_Dropdown/OptionDataList
  class TMP_Dropdown::OptionDataList : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData> m_Options
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>* m_Options;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>*) == 0x8);
    // Creating value type constructor for type: OptionDataList
    OptionDataList(System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>* m_Options_ = {}) noexcept : m_Options{m_Options_} {}
    // Creating conversion operator: operator System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>*
    constexpr operator System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>*() const noexcept {
      return m_Options;
    }
    // public System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData> get_options()
    // Offset: 0x10ECD08
    System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>* get_options();
    // public System.Void set_options(System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData> value)
    // Offset: 0x10ECD10
    void set_options(System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>* value);
    // public System.Void .ctor()
    // Offset: 0x10EA46C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Dropdown::OptionDataList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_Dropdown::OptionDataList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Dropdown::OptionDataList*, creationType>()));
    }
  }; // TMPro.TMP_Dropdown/OptionDataList
  #pragma pack(pop)
  static check_size<sizeof(TMP_Dropdown::OptionDataList), 16 + sizeof(System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>*)> __TMPro_TMP_Dropdown_OptionDataListSizeCheck;
  static_assert(sizeof(TMP_Dropdown::OptionDataList) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Dropdown::OptionDataList*, "TMPro", "TMP_Dropdown/OptionDataList");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_Dropdown::OptionDataList::get_options
// Il2CppName: get_options
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>* (TMPro::TMP_Dropdown::OptionDataList::*)()>(&TMPro::TMP_Dropdown::OptionDataList::get_options)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Dropdown::OptionDataList*), "get_options", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Dropdown::OptionDataList::set_options
// Il2CppName: set_options
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_Dropdown::OptionDataList::*)(System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>*)>(&TMPro::TMP_Dropdown::OptionDataList::set_options)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("TMPro", "TMP_Dropdown/OptionData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Dropdown::OptionDataList*), "set_options", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Dropdown::OptionDataList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
