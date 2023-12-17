#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoAsyncCall)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class MonoAsyncCall;
}
// Write type traits
MARK_REF_PTR_T(::System::MonoAsyncCall);
// Type: System::MonoAsyncCall
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2606))
// CS Name: ::System::MonoAsyncCall*
class CORDL_TYPE MonoAsyncCall : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field msg offset 0x10
 __declspec(property(get=__get_msg, put=__set_msg)) ::System::Object*  msg;

/// @brief Field cb_method offset 0x18
 __declspec(property(get=__get_cb_method, put=__set_cb_method)) ::cordl_internals::intptr_t  cb_method;

/// @brief Field cb_target offset 0x20
 __declspec(property(get=__get_cb_target, put=__set_cb_target)) ::System::Object*  cb_target;

/// @brief Field state offset 0x28
 __declspec(property(get=__get_state, put=__set_state)) ::System::Object*  state;

/// @brief Field res offset 0x30
 __declspec(property(get=__get_res, put=__set_res)) ::System::Object*  res;

/// @brief Field out_args offset 0x38
 __declspec(property(get=__get_out_args, put=__set_out_args)) ::System::Object*  out_args;

constexpr void __set_msg(::System::Object*  value) ;

constexpr ::System::Object* __get_msg() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_msg() const;

constexpr void __set_cb_method(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_cb_method() ;

constexpr ::cordl_internals::intptr_t const& __get_cb_method() const;

constexpr void __set_cb_target(::System::Object*  value) ;

constexpr ::System::Object* __get_cb_target() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_cb_target() const;

constexpr void __set_state(::System::Object*  value) ;

constexpr ::System::Object* __get_state() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_state() const;

constexpr void __set_res(::System::Object*  value) ;

constexpr ::System::Object* __get_res() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_res() const;

constexpr void __set_out_args(::System::Object*  value) ;

constexpr ::System::Object* __get_out_args() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_out_args() const;

static inline ::System::MonoAsyncCall* New_ctor() ;

/// @brief Method .ctor addr 0x25fa554 size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MonoAsyncCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoAsyncCall(MonoAsyncCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoAsyncCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoAsyncCall(MonoAsyncCall const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MonoAsyncCall()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MonoAsyncCall, 0x40>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::MonoAsyncCall);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoAsyncCall*, "System", "MonoAsyncCall");
