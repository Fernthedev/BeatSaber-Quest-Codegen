#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__LivestreamingVideoStats_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithLivestreamingVideoStats)
namespace Oculus::Platform::Models {
class LivestreamingVideoStats;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLivestreamingVideoStats;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLivestreamingVideoStats);
// Type: Oculus.Platform::MessageWithLivestreamingVideoStats
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13456)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4596 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13304))
// CS Name: ::Oculus.Platform::MessageWithLivestreamingVideoStats*
class CORDL_TYPE MessageWithLivestreamingVideoStats : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LivestreamingVideoStats*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LivestreamingVideoStats*>)]{};

static inline ::Oculus::Platform::MessageWithLivestreamingVideoStats* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26f2820 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetLivestreamingVideoStats addr 0x26f2878 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::LivestreamingVideoStats* GetLivestreamingVideoStats() ;

/// @brief Method GetDataFromMessage addr 0x26f28b4 size 0x9c virtual true final false
inline ::Oculus::Platform::Models::LivestreamingVideoStats* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingVideoStats", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithLivestreamingVideoStats(MessageWithLivestreamingVideoStats && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingVideoStats", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithLivestreamingVideoStats(MessageWithLivestreamingVideoStats const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithLivestreamingVideoStats()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLivestreamingVideoStats, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLivestreamingVideoStats);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLivestreamingVideoStats*, "Oculus.Platform", "MessageWithLivestreamingVideoStats");
