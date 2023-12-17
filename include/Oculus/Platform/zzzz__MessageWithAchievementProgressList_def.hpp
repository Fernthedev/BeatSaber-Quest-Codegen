#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__AchievementProgressList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithAchievementProgressList)
namespace Oculus::Platform::Models {
class AchievementProgressList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAchievementProgressList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAchievementProgressList);
// Type: Oculus.Platform::MessageWithAchievementProgressList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4571 }), TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13410))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13269))
// CS Name: ::Oculus.Platform::MessageWithAchievementProgressList*
class CORDL_TYPE MessageWithAchievementProgressList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>)]{};

static inline ::Oculus::Platform::MessageWithAchievementProgressList* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26ee950 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetAchievementProgressList addr 0x26f0960 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::AchievementProgressList* GetAchievementProgressList() ;

/// @brief Method GetDataFromMessage addr 0x26f099c size 0x9c virtual true final false
inline ::Oculus::Platform::Models::AchievementProgressList* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAchievementProgressList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithAchievementProgressList(MessageWithAchievementProgressList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAchievementProgressList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithAchievementProgressList(MessageWithAchievementProgressList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithAchievementProgressList()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAchievementProgressList, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAchievementProgressList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAchievementProgressList*, "Oculus.Platform", "MessageWithAchievementProgressList");
