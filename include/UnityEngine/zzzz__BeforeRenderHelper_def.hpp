#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeforeRenderHelper)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine {
struct __BeforeRenderHelper__OrderBlock;
}
// Forward declare root types
namespace UnityEngine {
class BeforeRenderHelper;
}
namespace UnityEngine {
struct __BeforeRenderHelper__OrderBlock;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::BeforeRenderHelper);
MARK_VAL_T(::UnityEngine::__BeforeRenderHelper__OrderBlock);
// Type: ::OrderBlock
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10099))
// CS Name: ::BeforeRenderHelper::OrderBlock
struct CORDL_TYPE __BeforeRenderHelper__OrderBlock : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field order offset 0x0
 __declspec(property(get=__get_order, put=__set_order)) int32_t  order;

/// @brief Field callback offset 0x8
 __declspec(property(get=__get_callback, put=__set_callback)) ::UnityEngine::Events::UnityAction*  callback;

constexpr void __set_order(int32_t  value) ;

constexpr int32_t& __get_order() ;

constexpr int32_t const& __get_order() const;

constexpr void __set_callback(::UnityEngine::Events::UnityAction*  value) ;

constexpr ::UnityEngine::Events::UnityAction* __get_callback() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction*> __get_callback() const;

// Ctor Parameters [CppParam { name: "order", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "callback", ty: "::UnityEngine::Events::UnityAction*", modifiers: "", def_value: None }]
constexpr __BeforeRenderHelper__OrderBlock(int32_t  order, ::UnityEngine::Events::UnityAction*  callback) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BeforeRenderHelper__OrderBlock(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BeforeRenderHelper__OrderBlock()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__BeforeRenderHelper__OrderBlock, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: UnityEngine::BeforeRenderHelper
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10100))
// CS Name: ::UnityEngine::BeforeRenderHelper*
class CORDL_TYPE BeforeRenderHelper : public ::System::Object {
public:
// Declarations
using OrderBlock = ::UnityEngine::__BeforeRenderHelper__OrderBlock;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_OrderBlocks(::System::Collections::Generic::List_1<::UnityEngine::__BeforeRenderHelper__OrderBlock>*  value) ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::__BeforeRenderHelper__OrderBlock>* getStaticF_s_OrderBlocks() ;

/// @brief Method GetUpdateOrder addr 0x2cc177c size 0x118 virtual false final false
static inline int32_t GetUpdateOrder(::UnityEngine::Events::UnityAction*  callback) ;

/// @brief Method RegisterCallback addr 0x2cc1894 size 0x348 virtual false final false
static inline void RegisterCallback(::UnityEngine::Events::UnityAction*  callback) ;

/// @brief Method UnregisterCallback addr 0x2cc1bdc size 0x310 virtual false final false
static inline void UnregisterCallback(::UnityEngine::Events::UnityAction*  callback) ;

/// @brief Method Invoke addr 0x2cc1eec size 0x19c virtual false final false
static inline void Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "BeforeRenderHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeforeRenderHelper(BeforeRenderHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeforeRenderHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeforeRenderHelper(BeforeRenderHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeforeRenderHelper()  = default;
public:


// Fields

// Static field s_OrderBlocks


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::BeforeRenderHelper, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::BeforeRenderHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BeforeRenderHelper*, "UnityEngine", "BeforeRenderHelper");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__BeforeRenderHelper__OrderBlock, "UnityEngine", "BeforeRenderHelper/OrderBlock");
