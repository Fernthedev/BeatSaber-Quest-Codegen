#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChallengeEntry)
namespace Oculus::Platform::Models {
class User;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class ChallengeEntry;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::ChallengeEntry);
// Type: Oculus.Platform.Models::ChallengeEntry
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13428))
// CS Name: ::Oculus.Platform.Models::ChallengeEntry*
class CORDL_TYPE ChallengeEntry : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field DisplayScore offset 0x10
 __declspec(property(get=__get_DisplayScore, put=__set_DisplayScore)) ::StringW  DisplayScore;

/// @brief Field ExtraData offset 0x18
 __declspec(property(get=__get_ExtraData, put=__set_ExtraData)) ::ArrayW<uint8_t,::Array<uint8_t>*>  ExtraData;

/// @brief Field ID offset 0x20
 __declspec(property(get=__get__cordl_ID, put=__set__cordl_ID)) uint64_t  _cordl_ID;

/// @brief Field Rank offset 0x28
 __declspec(property(get=__get_Rank, put=__set_Rank)) int32_t  Rank;

/// @brief Field Score offset 0x30
 __declspec(property(get=__get_Score, put=__set_Score)) int64_t  Score;

/// @brief Field Timestamp offset 0x38
 __declspec(property(get=__get_Timestamp, put=__set_Timestamp)) ::System::DateTime  Timestamp;

/// @brief Field User offset 0x40
 __declspec(property(get=__get_User, put=__set_User)) ::Oculus::Platform::Models::User*  User;

constexpr void __set_DisplayScore(::StringW  value) ;

constexpr ::StringW& __get_DisplayScore() ;

constexpr ::StringW const& __get_DisplayScore() const;

constexpr void __set_ExtraData(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_ExtraData() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_ExtraData() const;

constexpr void __set__cordl_ID(uint64_t  value) ;

constexpr uint64_t& __get__cordl_ID() ;

constexpr uint64_t const& __get__cordl_ID() const;

constexpr void __set_Rank(int32_t  value) ;

constexpr int32_t& __get_Rank() ;

constexpr int32_t const& __get_Rank() const;

constexpr void __set_Score(int64_t  value) ;

constexpr int64_t& __get_Score() ;

constexpr int64_t const& __get_Score() const;

constexpr void __set_Timestamp(::System::DateTime  value) ;

constexpr ::System::DateTime& __get_Timestamp() ;

constexpr ::System::DateTime const& __get_Timestamp() const;

constexpr void __set_User(::Oculus::Platform::Models::User*  value) ;

constexpr ::Oculus::Platform::Models::User* __get_User() ;

constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> __get_User() const;

static inline ::Oculus::Platform::Models::ChallengeEntry* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x27057d8 size 0x110 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "ChallengeEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChallengeEntry(ChallengeEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChallengeEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChallengeEntry(ChallengeEntry const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ChallengeEntry()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::ChallengeEntry, 0x48>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::ChallengeEntry);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::ChallengeEntry*, "Oculus.Platform.Models", "ChallengeEntry");
