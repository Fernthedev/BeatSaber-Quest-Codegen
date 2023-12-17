#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__AchievementUpdate_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithAchievementUpdate)
namespace Oculus::Platform::Models {
class AchievementUpdate;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAchievementUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAchievementUpdate);
// Type: Oculus.Platform::MessageWithAchievementUpdate
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4572 }), TypeDefinitionIndex(TypeDefinitionIndex(13411)), TypeDefinitionIndex(TypeDefinitionIndex(13262))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13270))
// CS Name: ::Oculus.Platform::MessageWithAchievementUpdate*
class CORDL_TYPE MessageWithAchievementUpdate : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementUpdate*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementUpdate*>)]{};

static inline ::Oculus::Platform::MessageWithAchievementUpdate* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26ee9a8 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetAchievementUpdate addr 0x26f0a38 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::AchievementUpdate* GetAchievementUpdate() ;

/// @brief Method GetDataFromMessage addr 0x26f0a74 size 0x9c virtual true final false
inline ::Oculus::Platform::Models::AchievementUpdate* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAchievementUpdate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithAchievementUpdate(MessageWithAchievementUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAchievementUpdate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithAchievementUpdate(MessageWithAchievementUpdate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithAchievementUpdate()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAchievementUpdate, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAchievementUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAchievementUpdate*, "Oculus.Platform", "MessageWithAchievementUpdate");
