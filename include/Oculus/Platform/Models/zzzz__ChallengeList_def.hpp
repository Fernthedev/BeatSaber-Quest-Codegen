#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__Challenge_def.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChallengeList)
// Forward declare root types
namespace Oculus::Platform::Models {
class ChallengeList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::ChallengeList);
// Type: Oculus.Platform.Models::ChallengeList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13430)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13430), inst: 1171 }), TypeDefinitionIndex(TypeDefinitionIndex(13426))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13427))
// CS Name: ::Oculus.Platform.Models::ChallengeList*
class CORDL_TYPE ChallengeList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::Challenge*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::Challenge*>)]{};

/// @brief Field TotalCount offset 0x28
 __declspec(property(get=__get_TotalCount, put=__set_TotalCount)) uint64_t  TotalCount;

constexpr void __set_TotalCount(uint64_t  value) ;

constexpr uint64_t& __get_TotalCount() ;

constexpr uint64_t const& __get_TotalCount() const;

static inline ::Oculus::Platform::Models::ChallengeList* New_ctor(::cordl_internals::intptr_t  a) ;

/// @brief Method .ctor addr 0x270555c size 0x27c virtual false final false
inline void _ctor(::cordl_internals::intptr_t  a) ;

// Ctor Parameters [CppParam { name: "", ty: "ChallengeList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChallengeList(ChallengeList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChallengeList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChallengeList(ChallengeList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ChallengeList()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::ChallengeList, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::ChallengeList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::ChallengeList*, "Oculus.Platform.Models", "ChallengeList");
