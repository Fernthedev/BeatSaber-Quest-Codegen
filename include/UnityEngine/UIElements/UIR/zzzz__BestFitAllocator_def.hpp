#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BestFitAllocator)
namespace UnityEngine::UIElements::UIR {
class __BestFitAllocator__Block;
}
namespace UnityEngine::UIElements::UIR {
class __BestFitAllocator__BlockPool;
}
namespace UnityEngine::UIElements::UIR {
struct Alloc;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class BestFitAllocator;
}
namespace UnityEngine::UIElements::UIR {
class __BestFitAllocator__Block;
}
namespace UnityEngine::UIElements::UIR {
class __BestFitAllocator__BlockPool;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::BestFitAllocator);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool);
// Type: ::Block
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7399)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7399), inst: 3980 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7435))
// CS Name: ::BestFitAllocator::Block*
class CORDL_TYPE __BestFitAllocator__Block : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*>)]{};

/// @brief Field start offset 0x18
 __declspec(property(get=__get_start, put=__set_start)) uint32_t  start;

/// @brief Field end offset 0x1c
 __declspec(property(get=__get_end, put=__set_end)) uint32_t  end;

/// @brief Field prev offset 0x20
 __declspec(property(get=__get_prev, put=__set_prev)) ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*  prev;

/// @brief Field next offset 0x28
 __declspec(property(get=__get_next, put=__set_next)) ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*  next;

/// @brief Field prevAvailable offset 0x30
 __declspec(property(get=__get_prevAvailable, put=__set_prevAvailable)) ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*  prevAvailable;

/// @brief Field nextAvailable offset 0x38
 __declspec(property(get=__get_nextAvailable, put=__set_nextAvailable)) ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*  nextAvailable;

/// @brief Field allocated offset 0x40
 __declspec(property(get=__get_allocated, put=__set_allocated)) bool  allocated;

 __declspec(property(get=get_size)) uint32_t  size;

constexpr void __set_start(uint32_t  value) ;

constexpr uint32_t& __get_start() ;

constexpr uint32_t const& __get_start() const;

constexpr void __set_end(uint32_t  value) ;

constexpr uint32_t& __get_end() ;

constexpr uint32_t const& __get_end() const;

constexpr void __set_prev(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*  value) ;

constexpr ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* __get_prev() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*> __get_prev() const;

constexpr void __set_next(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*  value) ;

constexpr ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*> __get_next() const;

constexpr void __set_prevAvailable(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*  value) ;

constexpr ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* __get_prevAvailable() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*> __get_prevAvailable() const;

constexpr void __set_nextAvailable(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*  value) ;

constexpr ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* __get_nextAvailable() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*> __get_nextAvailable() const;

constexpr void __set_allocated(bool  value) ;

constexpr bool& __get_allocated() ;

constexpr bool const& __get_allocated() const;

/// @brief Method get_size addr 0x2dd4ffc size 0xc virtual false final false
inline uint32_t get_size() ;

static inline ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* New_ctor() ;

/// @brief Method .ctor addr 0x2dd5254 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__BestFitAllocator__Block", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BestFitAllocator__Block(__BestFitAllocator__Block && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BestFitAllocator__Block", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BestFitAllocator__Block(__BestFitAllocator__Block const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BestFitAllocator__Block()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block, 0x48>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
// Type: ::BlockPool
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7400), inst: 3980 }), TypeDefinitionIndex(TypeDefinitionIndex(7435)), TypeDefinitionIndex(TypeDefinitionIndex(7400))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7434))
// CS Name: ::BestFitAllocator::BlockPool*
class CORDL_TYPE __BestFitAllocator__BlockPool : public ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*>)]{};

/// @brief Method CreateBlock addr 0x2dd51fc size 0x58 virtual false final false
static inline ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* CreateBlock() ;

/// @brief Method ResetBlock addr 0x2dd529c size 0x4 virtual false final false
static inline void ResetBlock(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*  block) ;

static inline ::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool* New_ctor() ;

/// @brief Method .ctor addr 0x2dd4ec4 size 0xf0 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__BestFitAllocator__BlockPool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BestFitAllocator__BlockPool(__BestFitAllocator__BlockPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BestFitAllocator__BlockPool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BestFitAllocator__BlockPool(__BestFitAllocator__BlockPool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BestFitAllocator__BlockPool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::BestFitAllocator
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7436))
// CS Name: ::UnityEngine.UIElements.UIR::BestFitAllocator*
class CORDL_TYPE BestFitAllocator : public ::System::Object {
public:
// Declarations
using Block = ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block;

using BlockPool = ::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field <totalSize>k__BackingField offset 0x10
 __declspec(property(get=__get__totalSize_k__BackingField, put=__set__totalSize_k__BackingField)) uint32_t  _totalSize_k__BackingField;

/// @brief Field m_FirstBlock offset 0x18
 __declspec(property(get=__get_m_FirstBlock, put=__set_m_FirstBlock)) ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*  m_FirstBlock;

/// @brief Field m_FirstAvailableBlock offset 0x20
 __declspec(property(get=__get_m_FirstAvailableBlock, put=__set_m_FirstAvailableBlock)) ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*  m_FirstAvailableBlock;

/// @brief Field m_BlockPool offset 0x28
 __declspec(property(get=__get_m_BlockPool, put=__set_m_BlockPool)) ::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool*  m_BlockPool;

/// @brief Field m_HighWatermark offset 0x30
 __declspec(property(get=__get_m_HighWatermark, put=__set_m_HighWatermark)) uint32_t  m_HighWatermark;

 __declspec(property(get=get_totalSize)) uint32_t  totalSize;

 __declspec(property(get=get_highWatermark)) uint32_t  highWatermark;

constexpr void __set__totalSize_k__BackingField(uint32_t  value) ;

constexpr uint32_t& __get__totalSize_k__BackingField() ;

constexpr uint32_t const& __get__totalSize_k__BackingField() const;

constexpr void __set_m_FirstBlock(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*  value) ;

constexpr ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* __get_m_FirstBlock() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*> __get_m_FirstBlock() const;

constexpr void __set_m_FirstAvailableBlock(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*  value) ;

constexpr ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* __get_m_FirstAvailableBlock() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*> __get_m_FirstAvailableBlock() const;

constexpr void __set_m_BlockPool(::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool*  value) ;

constexpr ::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool* __get_m_BlockPool() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool*> __get_m_BlockPool() const;

constexpr void __set_m_HighWatermark(uint32_t  value) ;

constexpr uint32_t& __get_m_HighWatermark() ;

constexpr uint32_t const& __get_m_HighWatermark() const;

static inline ::UnityEngine::UIElements::UIR::BestFitAllocator* New_ctor(uint32_t  size) ;

/// @brief Method .ctor addr 0x2dcbf90 size 0xa8 virtual false final false
inline void _ctor(uint32_t  size) ;

/// @brief Method get_totalSize addr 0x2dd4fb4 size 0x8 virtual false final false
inline uint32_t get_totalSize() ;

/// @brief Method get_highWatermark addr 0x2dcc4a4 size 0x8 virtual false final false
inline uint32_t get_highWatermark() ;

/// @brief Method Allocate addr 0x2dcbd58 size 0x194 virtual false final false
inline ::UnityEngine::UIElements::UIR::Alloc Allocate(uint32_t  size) ;

/// @brief Method Free addr 0x2dcc248 size 0x25c virtual false final false
inline void Free(::UnityEngine::UIElements::UIR::Alloc  alloc) ;

/// @brief Method CoalesceBlockWithPrevious addr 0x2dd50f4 size 0x108 virtual false final false
inline ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* CoalesceBlockWithPrevious(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*  block) ;

/// @brief Method BestFitFindAvailableBlock addr 0x2dd4fbc size 0x40 virtual false final false
inline ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* BestFitFindAvailableBlock(uint32_t  size) ;

/// @brief Method SplitBlock addr 0x2dd5008 size 0xec virtual false final false
inline void SplitBlock(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*  block, uint32_t  size) ;

// Ctor Parameters [CppParam { name: "", ty: "BestFitAllocator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BestFitAllocator(BestFitAllocator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BestFitAllocator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BestFitAllocator(BestFitAllocator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BestFitAllocator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::BestFitAllocator, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::BestFitAllocator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::BestFitAllocator*, "UnityEngine.UIElements.UIR", "BestFitAllocator");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*, "UnityEngine.UIElements.UIR", "BestFitAllocator/Block");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool*, "UnityEngine.UIElements.UIR", "BestFitAllocator/BlockPool");
