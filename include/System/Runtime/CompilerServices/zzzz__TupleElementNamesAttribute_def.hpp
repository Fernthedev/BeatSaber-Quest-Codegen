#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TupleElementNamesAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class TupleElementNamesAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::TupleElementNamesAttribute);
// Type: System.Runtime.CompilerServices::TupleElementNamesAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3386))
// CS Name: ::System.Runtime.CompilerServices::TupleElementNamesAttribute*
class CORDL_TYPE TupleElementNamesAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field _transformNames offset 0x10
 __declspec(property(get=__get__transformNames, put=__set__transformNames)) ::ArrayW<::StringW,::Array<::StringW>*>  _transformNames;

constexpr void __set__transformNames(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get__transformNames() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get__transformNames() const;

static inline ::System::Runtime::CompilerServices::TupleElementNamesAttribute* New_ctor(::ArrayW<::StringW,::Array<::StringW>*>  transformNames) ;

/// @brief Method .ctor addr 0x24db510 size 0x78 virtual false final false
inline void _ctor(::ArrayW<::StringW,::Array<::StringW>*>  transformNames) ;

// Ctor Parameters [CppParam { name: "", ty: "TupleElementNamesAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TupleElementNamesAttribute(TupleElementNamesAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TupleElementNamesAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TupleElementNamesAttribute(TupleElementNamesAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TupleElementNamesAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::TupleElementNamesAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::TupleElementNamesAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::TupleElementNamesAttribute*, "System.Runtime.CompilerServices", "TupleElementNamesAttribute");
