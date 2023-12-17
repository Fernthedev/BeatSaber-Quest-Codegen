#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamingContext)
namespace System::Runtime::Serialization {
struct StreamingContextStates;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::StreamingContext);
// Type: System.Runtime.Serialization::StreamingContext
namespace System::Runtime::Serialization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3235))
// CS Name: ::System.Runtime.Serialization::StreamingContext
struct CORDL_TYPE StreamingContext : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_additionalContext offset 0x0
 __declspec(property(get=__get_m_additionalContext, put=__set_m_additionalContext)) ::System::Object*  m_additionalContext;

/// @brief Field m_state offset 0x8
 __declspec(property(get=__get_m_state, put=__set_m_state)) ::System::Runtime::Serialization::StreamingContextStates  m_state;

 __declspec(property(get=get_Context)) ::System::Object*  Context;

 __declspec(property(get=get_State)) ::System::Runtime::Serialization::StreamingContextStates  State;

constexpr void __set_m_additionalContext(::System::Object*  value) ;

constexpr ::System::Object* __get_m_additionalContext() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_m_additionalContext() const;

constexpr void __set_m_state(::System::Runtime::Serialization::StreamingContextStates  value) ;

constexpr ::System::Runtime::Serialization::StreamingContextStates& __get_m_state() ;

constexpr ::System::Runtime::Serialization::StreamingContextStates const& __get_m_state() const;

/// @brief Method .ctor addr 0x24bf8f0 size 0xc virtual false final false
inline void _ctor(::System::Runtime::Serialization::StreamingContextStates  state) ;

/// @brief Method .ctor addr 0x24bf8fc size 0xc virtual false final false
inline void _ctor(::System::Runtime::Serialization::StreamingContextStates  state, ::System::Object*  additional) ;

/// @brief Method get_Context addr 0x24bf908 size 0x8 virtual false final false
inline ::System::Object* get_Context() ;

/// @brief Method Equals addr 0x24bf910 size 0xb0 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x24bf9c0 size 0x8 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method get_State addr 0x24bf9c8 size 0x8 virtual false final false
inline ::System::Runtime::Serialization::StreamingContextStates get_State() ;

// Ctor Parameters [CppParam { name: "m_additionalContext", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "m_state", ty: "::System::Runtime::Serialization::StreamingContextStates", modifiers: "", def_value: None }]
constexpr StreamingContext(::System::Object*  m_additionalContext, ::System::Runtime::Serialization::StreamingContextStates  m_state) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StreamingContext(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StreamingContext()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::StreamingContext, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::StreamingContext, "System.Runtime.Serialization", "StreamingContext");
