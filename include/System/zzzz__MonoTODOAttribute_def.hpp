#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoTODOAttribute)
// Forward declare root types
namespace System {
class MonoTODOAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::MonoTODOAttribute);
// Type: System::MonoTODOAttribute
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2538))
// CS Name: ::System::MonoTODOAttribute*
class CORDL_TYPE MonoTODOAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field comment offset 0x10
 __declspec(property(get=__get_comment, put=__set_comment)) ::StringW  comment;

constexpr void __set_comment(::StringW  value) ;

constexpr ::StringW& __get_comment() ;

constexpr ::StringW const& __get_comment() const;

static inline ::System::MonoTODOAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x25d7abc size 0x8 virtual false final false
inline void _ctor() ;

static inline ::System::MonoTODOAttribute* New_ctor(::StringW  comment) ;

/// @brief Method .ctor addr 0x25d7acc size 0x28 virtual false final false
inline void _ctor(::StringW  comment) ;

// Ctor Parameters [CppParam { name: "", ty: "MonoTODOAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoTODOAttribute(MonoTODOAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoTODOAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoTODOAttribute(MonoTODOAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MonoTODOAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MonoTODOAttribute, 0x18>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::MonoTODOAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoTODOAttribute*, "System", "MonoTODOAttribute");
