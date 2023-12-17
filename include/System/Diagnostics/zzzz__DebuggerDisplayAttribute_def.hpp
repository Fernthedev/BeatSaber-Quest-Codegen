#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DebuggerDisplayAttribute)
// Forward declare root types
namespace System::Diagnostics {
class DebuggerDisplayAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::DebuggerDisplayAttribute);
// Type: System.Diagnostics::DebuggerDisplayAttribute
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3737))
// CS Name: ::System.Diagnostics::DebuggerDisplayAttribute*
class CORDL_TYPE DebuggerDisplayAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Attribute)]{};

/// @brief Field name offset 0x10
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field value offset 0x18
 __declspec(property(get=__get_value, put=__set_value)) ::StringW  value;

/// @brief Field type offset 0x20
 __declspec(property(get=__get_type, put=__set_type)) ::StringW  type;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_value(::StringW  value) ;

constexpr ::StringW& __get_value() ;

constexpr ::StringW const& __get_value() const;

constexpr void __set_type(::StringW  value) ;

constexpr ::StringW& __get_type() ;

constexpr ::StringW const& __get_type() const;

static inline ::System::Diagnostics::DebuggerDisplayAttribute* New_ctor(::StringW  value) ;

/// @brief Method .ctor addr 0x2579dac size 0x70 virtual false final false
inline void _ctor(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "DebuggerDisplayAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebuggerDisplayAttribute(DebuggerDisplayAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebuggerDisplayAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebuggerDisplayAttribute(DebuggerDisplayAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DebuggerDisplayAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::DebuggerDisplayAttribute, 0x28>, "Size mismatch!");

} // namespace end def System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::DebuggerDisplayAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggerDisplayAttribute*, "System.Diagnostics", "DebuggerDisplayAttribute");
