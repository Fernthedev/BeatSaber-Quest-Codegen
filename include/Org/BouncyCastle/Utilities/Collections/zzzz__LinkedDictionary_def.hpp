#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LinkedDictionary)
namespace System {
class Array;
}
namespace System {
class Object;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class LinkedDictionary;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::LinkedDictionary);
// Type: Org.BouncyCastle.Utilities.Collections::LinkedDictionary
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1783))
// CS Name: ::Org.BouncyCastle.Utilities.Collections::LinkedDictionary*
class CORDL_TYPE LinkedDictionary : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field hash offset 0x10
 __declspec(property(get=__get_hash, put=__set_hash)) ::System::Collections::IDictionary*  hash;

/// @brief Field keys offset 0x18
 __declspec(property(get=__get_keys, put=__set_keys)) ::System::Collections::IList*  keys;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsFixedSize)) bool  IsFixedSize;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

 __declspec(property(get=get_SyncRoot)) ::System::Object*  SyncRoot;

 __declspec(property(get=get_Keys)) ::System::Collections::ICollection*  Keys;

 __declspec(property(get=get_Values)) ::System::Collections::ICollection*  Values;

 __declspec(property(get=get_Item, put=set_Item)) ::System::Object*  Item[];

/// @brief Convert operator to "::System::Collections::IDictionary"
constexpr operator  ::System::Collections::IDictionary*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set_hash(::System::Collections::IDictionary*  value) ;

constexpr ::System::Collections::IDictionary* __get_hash() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> __get_hash() const;

constexpr void __set_keys(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_keys() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_keys() const;

static inline ::Org::BouncyCastle::Utilities::Collections::LinkedDictionary* New_ctor() ;

/// @brief Method .ctor addr 0x1158b3c size 0x70 virtual false final false
inline void _ctor() ;

/// @brief Method Add addr 0x1158bac size 0x138 virtual true final false
inline void Add(::System::Object*  k, ::System::Object*  v) ;

/// @brief Method Clear addr 0x1158ce4 size 0x11c virtual true final false
inline void Clear() ;

/// @brief Method Contains addr 0x1158e00 size 0xac virtual true final false
inline bool Contains(::System::Object*  k) ;

/// @brief Method CopyTo addr 0x1158eac size 0x39c virtual true final false
inline void CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method get_Count addr 0x1159248 size 0xa4 virtual true final false
inline int32_t get_Count() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x11592ec size 0x10 virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetEnumerator addr 0x11592fc size 0x6c virtual true final false
inline ::System::Collections::IDictionaryEnumerator* GetEnumerator() ;

/// @brief Method Remove addr 0x1159398 size 0x128 virtual true final false
inline void Remove(::System::Object*  k) ;

/// @brief Method get_IsFixedSize addr 0x11594c0 size 0x8 virtual true final false
inline bool get_IsFixedSize() ;

/// @brief Method get_IsReadOnly addr 0x11594c8 size 0x8 virtual true final false
inline bool get_IsReadOnly() ;

/// @brief Method get_IsSynchronized addr 0x11594d0 size 0x8 virtual true final false
inline bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x11594d8 size 0x4c virtual true final false
inline ::System::Object* get_SyncRoot() ;

/// @brief Method get_Keys addr 0x1159524 size 0x5c virtual true final false
inline ::System::Collections::ICollection* get_Keys() ;

/// @brief Method get_Values addr 0x1159580 size 0x4a4 virtual true final false
inline ::System::Collections::ICollection* get_Values() ;

/// @brief Method get_Item addr 0x1159a24 size 0xa8 virtual true final false
inline ::System::Object* get_Item(::System::Object*  k) ;

/// @brief Method set_Item addr 0x1159acc size 0x1a4 virtual true final false
inline void set_Item(::System::Object*  k, ::System::Object*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "LinkedDictionary", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkedDictionary(LinkedDictionary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkedDictionary", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkedDictionary(LinkedDictionary const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LinkedDictionary()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::LinkedDictionary, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::LinkedDictionary);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::LinkedDictionary*, "Org.BouncyCastle.Utilities.Collections", "LinkedDictionary");
