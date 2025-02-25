// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Forward declaring type: LeaderboardEntryDTO
  class LeaderboardEntryDTO;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: LeaderboardsDTO.LeaderboardEntriesDTO
  // [TokenAttribute] Offset: FFFFFFFF
  struct LeaderboardEntriesDTO/*, public System::ValueType*/ {
    public:
    // public LeaderboardsDTO.LeaderboardEntryDTO[] entries
    // Size: 0x8
    // Offset: 0x0
    ::Array<LeaderboardsDTO::LeaderboardEntryDTO*>* entries;
    // Field size check
    static_assert(sizeof(::Array<LeaderboardsDTO::LeaderboardEntryDTO*>*) == 0x8);
    // Creating value type constructor for type: LeaderboardEntriesDTO
    constexpr LeaderboardEntriesDTO(::Array<LeaderboardsDTO::LeaderboardEntryDTO*>* entries_ = {}) noexcept : entries{entries_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::Array<LeaderboardsDTO::LeaderboardEntryDTO*>*
    constexpr operator ::Array<LeaderboardsDTO::LeaderboardEntryDTO*>*() const noexcept {
      return entries;
    }
    // Get instance field reference: public LeaderboardsDTO.LeaderboardEntryDTO[] entries
    ::Array<LeaderboardsDTO::LeaderboardEntryDTO*>*& dyn_entries();
  }; // LeaderboardsDTO.LeaderboardEntriesDTO
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardEntriesDTO), 0 + sizeof(::Array<LeaderboardsDTO::LeaderboardEntryDTO*>*)> __LeaderboardsDTO_LeaderboardEntriesDTOSizeCheck;
  static_assert(sizeof(LeaderboardEntriesDTO) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LeaderboardsDTO::LeaderboardEntriesDTO, "LeaderboardsDTO", "LeaderboardEntriesDTO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
