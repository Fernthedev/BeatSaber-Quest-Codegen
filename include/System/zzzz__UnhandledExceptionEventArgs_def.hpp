#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(UnhandledExceptionEventArgs)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class UnhandledExceptionEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::UnhandledExceptionEventArgs);
// Type: System::UnhandledExceptionEventArgs
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2502))
// CS Name: ::System::UnhandledExceptionEventArgs*
class CORDL_TYPE UnhandledExceptionEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::EventArgs)]{};

/// @brief Field _exception offset 0x10
 __declspec(property(get=__get__exception, put=__set__exception)) ::System::Object*  _exception;

/// @brief Field _isTerminating offset 0x18
 __declspec(property(get=__get__isTerminating, put=__set__isTerminating)) bool  _isTerminating;

 __declspec(property(get=get_ExceptionObject)) ::System::Object*  ExceptionObject;

 __declspec(property(get=get_IsTerminating)) bool  IsTerminating;

constexpr void __set__exception(::System::Object*  value) ;

constexpr ::System::Object* __get__exception() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__exception() const;

constexpr void __set__isTerminating(bool  value) ;

constexpr bool& __get__isTerminating() ;

constexpr bool const& __get__isTerminating() const;

static inline ::System::UnhandledExceptionEventArgs* New_ctor(::System::Object*  exception, bool  isTerminating) ;

/// @brief Method .ctor addr 0x25cdf38 size 0x74 virtual false final false
inline void _ctor(::System::Object*  exception, bool  isTerminating) ;

/// @brief Method get_ExceptionObject addr 0x25cdfac size 0x8 virtual false final false
inline ::System::Object* get_ExceptionObject() ;

/// @brief Method get_IsTerminating addr 0x25cdfb4 size 0x8 virtual false final false
inline bool get_IsTerminating() ;

// Ctor Parameters [CppParam { name: "", ty: "UnhandledExceptionEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnhandledExceptionEventArgs(UnhandledExceptionEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnhandledExceptionEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnhandledExceptionEventArgs(UnhandledExceptionEventArgs const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnhandledExceptionEventArgs()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UnhandledExceptionEventArgs, 0x20>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::UnhandledExceptionEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::UnhandledExceptionEventArgs*, "System", "UnhandledExceptionEventArgs");
