#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__AchievementDefinitionList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithAchievementDefinitions)
namespace Oculus::Platform::Models {
class AchievementDefinitionList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAchievementDefinitions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAchievementDefinitions);
// Type: Oculus.Platform::MessageWithAchievementDefinitions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13408)), TypeDefinitionIndex(TypeDefinitionIndex(13262)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4570 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13268))
// CS Name: ::Oculus.Platform::MessageWithAchievementDefinitions*
class CORDL_TYPE MessageWithAchievementDefinitions : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementDefinitionList*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementDefinitionList*>)]{};

static inline ::Oculus::Platform::MessageWithAchievementDefinitions* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26ee8f8 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetAchievementDefinitions addr 0x26f0888 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::AchievementDefinitionList* GetAchievementDefinitions() ;

/// @brief Method GetDataFromMessage addr 0x26f08c4 size 0x9c virtual true final false
inline ::Oculus::Platform::Models::AchievementDefinitionList* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAchievementDefinitions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithAchievementDefinitions(MessageWithAchievementDefinitions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAchievementDefinitions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithAchievementDefinitions(MessageWithAchievementDefinitions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithAchievementDefinitions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAchievementDefinitions, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAchievementDefinitions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAchievementDefinitions*, "Oculus.Platform", "MessageWithAchievementDefinitions");
