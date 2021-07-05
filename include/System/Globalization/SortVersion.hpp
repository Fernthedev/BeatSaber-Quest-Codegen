// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Guid
#include "System/Guid.hpp"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.SortVersion
  class SortVersion : public ::Il2CppObject {
    public:
    // private System.Int32 m_NlsVersion
    // Size: 0x4
    // Offset: 0x10
    int m_NlsVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Guid m_SortId
    // Size: 0x10
    // Offset: 0x14
    System::Guid m_SortId;
    // Field size check
    static_assert(sizeof(System::Guid) == 0x10);
    // Creating value type constructor for type: SortVersion
    SortVersion(int m_NlsVersion_ = {}, System::Guid m_SortId_ = {}) noexcept : m_NlsVersion{m_NlsVersion_}, m_SortId{m_SortId_} {}
  }; // System.Globalization.SortVersion
  #pragma pack(pop)
  static check_size<sizeof(SortVersion), 20 + sizeof(System::Guid)> __System_Globalization_SortVersionSizeCheck;
  static_assert(sizeof(SortVersion) == 0x24);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::SortVersion*, "System.Globalization", "SortVersion");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
