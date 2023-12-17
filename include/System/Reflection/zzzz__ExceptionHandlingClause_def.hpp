#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExceptionHandlingClause)
namespace System {
class Type;
}
namespace System::Reflection {
struct ExceptionHandlingClauseOptions;
}
// Forward declare root types
namespace System::Reflection {
class ExceptionHandlingClause;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::ExceptionHandlingClause);
// Type: System.Reflection::ExceptionHandlingClause
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3515))
// CS Name: ::System.Reflection::ExceptionHandlingClause*
class CORDL_TYPE ExceptionHandlingClause : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field catch_type offset 0x10
 __declspec(property(get=__get_catch_type, put=__set_catch_type)) ::System::Type*  catch_type;

/// @brief Field filter_offset offset 0x18
 __declspec(property(get=__get_filter_offset, put=__set_filter_offset)) int32_t  filter_offset;

/// @brief Field flags offset 0x1c
 __declspec(property(get=__get_flags, put=__set_flags)) ::System::Reflection::ExceptionHandlingClauseOptions  flags;

/// @brief Field try_offset offset 0x20
 __declspec(property(get=__get_try_offset, put=__set_try_offset)) int32_t  try_offset;

/// @brief Field try_length offset 0x24
 __declspec(property(get=__get_try_length, put=__set_try_length)) int32_t  try_length;

/// @brief Field handler_offset offset 0x28
 __declspec(property(get=__get_handler_offset, put=__set_handler_offset)) int32_t  handler_offset;

/// @brief Field handler_length offset 0x2c
 __declspec(property(get=__get_handler_length, put=__set_handler_length)) int32_t  handler_length;

constexpr void __set_catch_type(::System::Type*  value) ;

constexpr ::System::Type* __get_catch_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_catch_type() const;

constexpr void __set_filter_offset(int32_t  value) ;

constexpr int32_t& __get_filter_offset() ;

constexpr int32_t const& __get_filter_offset() const;

constexpr void __set_flags(::System::Reflection::ExceptionHandlingClauseOptions  value) ;

constexpr ::System::Reflection::ExceptionHandlingClauseOptions& __get_flags() ;

constexpr ::System::Reflection::ExceptionHandlingClauseOptions const& __get_flags() const;

constexpr void __set_try_offset(int32_t  value) ;

constexpr int32_t& __get_try_offset() ;

constexpr int32_t const& __get_try_offset() const;

constexpr void __set_try_length(int32_t  value) ;

constexpr int32_t& __get_try_length() ;

constexpr int32_t const& __get_try_length() const;

constexpr void __set_handler_offset(int32_t  value) ;

constexpr int32_t& __get_handler_offset() ;

constexpr int32_t const& __get_handler_offset() const;

constexpr void __set_handler_length(int32_t  value) ;

constexpr int32_t& __get_handler_length() ;

constexpr int32_t const& __get_handler_length() const;

static inline ::System::Reflection::ExceptionHandlingClause* New_ctor() ;

/// @brief Method .ctor addr 0x24f19fc size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method ToString addr 0x24f1a04 size 0x2c4 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionHandlingClause", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExceptionHandlingClause(ExceptionHandlingClause && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionHandlingClause", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExceptionHandlingClause(ExceptionHandlingClause const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ExceptionHandlingClause()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::ExceptionHandlingClause, 0x30>, "Size mismatch!");

} // namespace end def System::Reflection
NEED_NO_BOX(::System::Reflection::ExceptionHandlingClause);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ExceptionHandlingClause*, "System.Reflection", "ExceptionHandlingClause");
