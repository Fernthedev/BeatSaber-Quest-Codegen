#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerScoreItem_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerScoreRingItem)
namespace GlobalNamespace {
class __MultiplayerScoreRingItem__Pool;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerScoreRingItem;
}
namespace GlobalNamespace {
class __MultiplayerScoreRingItem__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerScoreRingItem);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerScoreRingItem__Pool);
// Type: ::MultiplayerScoreRingItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5247))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5253))
// CS Name: ::MultiplayerScoreRingItem*
class CORDL_TYPE MultiplayerScoreRingItem : public ::GlobalNamespace::MultiplayerScoreItem {
public:
// Declarations
using Pool = ::GlobalNamespace::__MultiplayerScoreRingItem__Pool;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::MultiplayerScoreItem)]{};

static inline ::GlobalNamespace::MultiplayerScoreRingItem* New_ctor() ;

/// @brief Method .ctor addr 0x2259a54 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreRingItem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerScoreRingItem(MultiplayerScoreRingItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreRingItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerScoreRingItem(MultiplayerScoreRingItem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerScoreRingItem()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerScoreRingItem, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 2822 }), TypeDefinitionIndex(TypeDefinitionIndex(11050)), TypeDefinitionIndex(TypeDefinitionIndex(5253))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5252))
// CS Name: ::MultiplayerScoreRingItem::Pool*
class CORDL_TYPE __MultiplayerScoreRingItem__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::MultiplayerScoreRingItem*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Zenject::MonoMemoryPool_1<::GlobalNamespace::MultiplayerScoreRingItem*>)]{};

static inline ::GlobalNamespace::__MultiplayerScoreRingItem__Pool* New_ctor() ;

/// @brief Method .ctor addr 0x2259a5c size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerScoreRingItem__Pool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultiplayerScoreRingItem__Pool(__MultiplayerScoreRingItem__Pool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerScoreRingItem__Pool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultiplayerScoreRingItem__Pool(__MultiplayerScoreRingItem__Pool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MultiplayerScoreRingItem__Pool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerScoreRingItem__Pool, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerScoreRingItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreRingItem*, "", "MultiplayerScoreRingItem");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerScoreRingItem__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerScoreRingItem__Pool*, "", "MultiplayerScoreRingItem/Pool");
