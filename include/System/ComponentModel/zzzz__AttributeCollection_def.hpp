#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeCollection)
namespace System::Collections {
class IEnumerator;
}
namespace System::ComponentModel {
struct __AttributeCollection__AttributeEntry;
}
namespace System {
class Attribute;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class Hashtable;
}
namespace System {
class Type;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
struct __AttributeCollection__AttributeEntry;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::AttributeCollection);
MARK_VAL_T(::System::ComponentModel::__AttributeCollection__AttributeEntry);
// Type: ::AttributeEntry
namespace System::ComponentModel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9404))
// CS Name: ::AttributeCollection::AttributeEntry
struct CORDL_TYPE __AttributeCollection__AttributeEntry : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field type offset 0x0
 __declspec(property(get=__get_type, put=__set_type)) ::System::Type*  type;

/// @brief Field index offset 0x8
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

constexpr void __set_type(::System::Type*  value) ;

constexpr ::System::Type* __get_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_type() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

// Ctor Parameters [CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __AttributeCollection__AttributeEntry(::System::Type*  type, int32_t  index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AttributeCollection__AttributeEntry(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AttributeCollection__AttributeEntry()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__AttributeCollection__AttributeEntry, 0x10>, "Size mismatch!");

} // namespace end def System::ComponentModel
// Type: System.ComponentModel::AttributeCollection
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9405))
// CS Name: ::System.ComponentModel::AttributeCollection*
class CORDL_TYPE AttributeCollection : public ::System::Object {
public:
// Declarations
using AttributeEntry = ::System::ComponentModel::__AttributeCollection__AttributeEntry;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _attributes offset 0x10
 __declspec(property(get=__get__attributes, put=__set__attributes)) ::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>  _attributes;

/// @brief Field _foundAttributeTypes offset 0x18
 __declspec(property(get=__get__foundAttributeTypes, put=__set__foundAttributeTypes)) ::ArrayW<::System::ComponentModel::__AttributeCollection__AttributeEntry,::Array<::System::ComponentModel::__AttributeCollection__AttributeEntry>*>  _foundAttributeTypes;

/// @brief Field _index offset 0x20
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

 __declspec(property(get=get_Attributes)) ::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>  Attributes;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::System::Attribute*  Item[];

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

 __declspec(property(get=System_Collections_ICollection_get_Count)) int32_t  System_Collections_ICollection_Count;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

static inline void setStaticF_Empty(::System::ComponentModel::AttributeCollection*  value) ;

static inline ::System::ComponentModel::AttributeCollection* getStaticF_Empty() ;

static inline void setStaticF_s_defaultAttributes(::System::Collections::Hashtable*  value) ;

static inline ::System::Collections::Hashtable* getStaticF_s_defaultAttributes() ;

constexpr void __set__attributes(::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>  value) ;

constexpr ::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>& __get__attributes() ;

constexpr ::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*> const& __get__attributes() const;

static inline void setStaticF_s_internalSyncObject(::System::Object*  value) ;

static inline ::System::Object* getStaticF_s_internalSyncObject() ;

constexpr void __set__foundAttributeTypes(::ArrayW<::System::ComponentModel::__AttributeCollection__AttributeEntry,::Array<::System::ComponentModel::__AttributeCollection__AttributeEntry>*>  value) ;

constexpr ::ArrayW<::System::ComponentModel::__AttributeCollection__AttributeEntry,::Array<::System::ComponentModel::__AttributeCollection__AttributeEntry>*>& __get__foundAttributeTypes() ;

constexpr ::ArrayW<::System::ComponentModel::__AttributeCollection__AttributeEntry,::Array<::System::ComponentModel::__AttributeCollection__AttributeEntry>*> const& __get__foundAttributeTypes() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

static inline ::System::ComponentModel::AttributeCollection* New_ctor(::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>  attributes) ;

/// @brief Method .ctor addr 0x2905878 size 0x124 virtual false final false
inline void _ctor(::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>  attributes) ;

/// @brief Method get_Attributes addr 0x290599c size 0x8 virtual true final false
inline ::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*> get_Attributes() ;

/// @brief Method get_Count addr 0x29059a4 size 0x24 virtual false final false
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x29059c8 size 0x4d8 virtual true final false
inline ::System::Attribute* get_Item(::System::Type*  attributeType) ;

/// @brief Method Contains addr 0x29063f0 size 0x60 virtual false final false
inline bool Contains(::System::Attribute*  attribute) ;

/// @brief Method GetDefaultAttribute addr 0x2905ea0 size 0x550 virtual false final false
inline ::System::Attribute* GetDefaultAttribute(::System::Type*  attributeType) ;

/// @brief Method GetEnumerator addr 0x2906450 size 0x24 virtual false final false
inline ::System::Collections::IEnumerator* GetEnumerator() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x2906474 size 0x8 virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x290647c size 0x8 virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.get_Count addr 0x2906484 size 0x24 virtual true final true
inline int32_t System_Collections_ICollection_get_Count() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x29064a8 size 0x4 virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method CopyTo addr 0x29064ac size 0x6c virtual true final true
inline void CopyTo(::System::Array*  array, int32_t  index) ;

// Ctor Parameters [CppParam { name: "", ty: "AttributeCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AttributeCollection(AttributeCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttributeCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttributeCollection(AttributeCollection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AttributeCollection()  = default;
public:


// Fields

// Static field Empty

// Static field s_defaultAttributes

// Static field s_internalSyncObject


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::AttributeCollection, 0x28>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::AttributeCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AttributeCollection*, "System.ComponentModel", "AttributeCollection");
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__AttributeCollection__AttributeEntry, "System.ComponentModel", "AttributeCollection/AttributeEntry");
