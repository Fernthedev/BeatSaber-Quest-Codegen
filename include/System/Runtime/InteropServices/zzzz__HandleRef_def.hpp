#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandleRef)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
struct HandleRef;
}
// Write type traits
MARK_VAL_T(::System::Runtime::InteropServices::HandleRef);
// Type: System.Runtime.InteropServices::HandleRef
namespace System::Runtime::InteropServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3303))
// CS Name: ::System.Runtime.InteropServices::HandleRef
struct CORDL_TYPE HandleRef : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _wrapper offset 0x0
 __declspec(property(get=__get__wrapper, put=__set__wrapper)) ::System::Object*  _wrapper;

/// @brief Field _handle offset 0x8
 __declspec(property(get=__get__handle, put=__set__handle)) ::cordl_internals::intptr_t  _handle;

 __declspec(property(get=get_Handle)) ::cordl_internals::intptr_t  Handle;

constexpr void __set__wrapper(::System::Object*  value) ;

constexpr ::System::Object* __get__wrapper() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__wrapper() const;

constexpr void __set__handle(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get__handle() ;

constexpr ::cordl_internals::intptr_t const& __get__handle() const;

/// @brief Method .ctor addr 0x24d6784 size 0x8 virtual false final false
inline void _ctor(::System::Object*  wrapper, ::cordl_internals::intptr_t  handle) ;

/// @brief Method get_Handle addr 0x24d678c size 0x8 virtual false final false
inline ::cordl_internals::intptr_t get_Handle() ;

// Ctor Parameters [CppParam { name: "_wrapper", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr HandleRef(::System::Object*  _wrapper, ::cordl_internals::intptr_t  _handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HandleRef(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HandleRef()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::HandleRef, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::HandleRef, "System.Runtime.InteropServices", "HandleRef");
