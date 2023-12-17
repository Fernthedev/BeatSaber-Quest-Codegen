#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultExecutionOrder)
// Forward declare root types
namespace UnityEngine {
class DefaultExecutionOrder;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::DefaultExecutionOrder);
// Type: UnityEngine::DefaultExecutionOrder
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10222))
// CS Name: ::UnityEngine::DefaultExecutionOrder*
class CORDL_TYPE DefaultExecutionOrder : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field m_Order offset 0x10
 __declspec(property(get=__get_m_Order, put=__set_m_Order)) int32_t  m_Order;

 __declspec(property(get=get_order)) int32_t  order;

constexpr void __set_m_Order(int32_t  value) ;

constexpr int32_t& __get_m_Order() ;

constexpr int32_t const& __get_m_Order() const;

static inline ::UnityEngine::DefaultExecutionOrder* New_ctor(int32_t  order) ;

/// @brief Method .ctor addr 0x2cd2968 size 0x28 virtual false final false
inline void _ctor(int32_t  order) ;

/// @brief Method get_order addr 0x2ccdab8 size 0x8 virtual false final false
inline int32_t get_order() ;

// Ctor Parameters [CppParam { name: "", ty: "DefaultExecutionOrder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultExecutionOrder(DefaultExecutionOrder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultExecutionOrder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultExecutionOrder(DefaultExecutionOrder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DefaultExecutionOrder()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::DefaultExecutionOrder, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::DefaultExecutionOrder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DefaultExecutionOrder*, "UnityEngine", "DefaultExecutionOrder");
