// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Models.DeserializableList`1
#include "Oculus/Platform/Models/DeserializableList_1.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LeaderboardEntry
  class LeaderboardEntry;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.Models.LeaderboardEntryList
  class LeaderboardEntryList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::LeaderboardEntry*> {
    public:
    // public readonly System.UInt64 TotalCount
    // Size: 0x8
    // Offset: 0x28
    uint64_t TotalCount;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: LeaderboardEntryList
    LeaderboardEntryList(uint64_t TotalCount_ = {}) noexcept : TotalCount{TotalCount_} {}
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return TotalCount;
    }
    // public System.Void .ctor(System.IntPtr a)
    // Offset: 0x14D016C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardEntryList* New_ctor(System::IntPtr a) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::LeaderboardEntryList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardEntryList*, creationType>(a)));
    }
  }; // Oculus.Platform.Models.LeaderboardEntryList
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LeaderboardEntryList*, "Oculus.Platform.Models", "LeaderboardEntryList");
// Writing includes for template specializations
// Writing MetadataGetter for method: Oculus::Platform::Models::LeaderboardEntryList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
