#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(CollectionAccessAttribute)
namespace JetBrains::Annotations {
struct CollectionAccessType;
}
// Forward declare root types
namespace JetBrains::Annotations {
class CollectionAccessAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::CollectionAccessAttribute);
// Type: JetBrains.Annotations::CollectionAccessAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15783))
// CS Name: ::JetBrains.Annotations::CollectionAccessAttribute*
class CORDL_TYPE CollectionAccessAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <CollectionAccessType>k__BackingField offset 0x10
 __declspec(property(get=__get__CollectionAccessType_k__BackingField, put=__set__CollectionAccessType_k__BackingField)) ::JetBrains::Annotations::CollectionAccessType  _CollectionAccessType_k__BackingField;

 __declspec(property(get=get_CollectionAccessType, put=set_CollectionAccessType)) ::JetBrains::Annotations::CollectionAccessType  CollectionAccessType;

constexpr void __set__CollectionAccessType_k__BackingField(::JetBrains::Annotations::CollectionAccessType  value) ;

constexpr ::JetBrains::Annotations::CollectionAccessType& __get__CollectionAccessType_k__BackingField() ;

constexpr ::JetBrains::Annotations::CollectionAccessType const& __get__CollectionAccessType_k__BackingField() const;

static inline ::JetBrains::Annotations::CollectionAccessAttribute* New_ctor(::JetBrains::Annotations::CollectionAccessType  collectionAccessType) ;

/// @brief Method .ctor addr 0x2eba6dc size 0x28 virtual false final false
inline void _ctor(::JetBrains::Annotations::CollectionAccessType  collectionAccessType) ;

/// @brief Method get_CollectionAccessType addr 0x2eba704 size 0x8 virtual false final false
inline ::JetBrains::Annotations::CollectionAccessType get_CollectionAccessType() ;

/// @brief Method set_CollectionAccessType addr 0x2eba70c size 0x8 virtual false final false
inline void set_CollectionAccessType(::JetBrains::Annotations::CollectionAccessType  value) ;

// Ctor Parameters [CppParam { name: "", ty: "CollectionAccessAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollectionAccessAttribute(CollectionAccessAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollectionAccessAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollectionAccessAttribute(CollectionAccessAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CollectionAccessAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::CollectionAccessAttribute, 0x18>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::CollectionAccessAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::CollectionAccessAttribute*, "JetBrains.Annotations", "CollectionAccessAttribute");
