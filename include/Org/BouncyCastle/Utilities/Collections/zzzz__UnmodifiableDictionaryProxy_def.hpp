#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/Collections/zzzz__UnmodifiableDictionary_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnmodifiableDictionaryProxy)
namespace System::Collections {
class IDictionary;
}
namespace System {
class Object;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Array;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class UnmodifiableDictionaryProxy;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy);
// Type: Org.BouncyCastle.Utilities.Collections::UnmodifiableDictionaryProxy
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1785))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1786))
// CS Name: ::Org.BouncyCastle.Utilities.Collections::UnmodifiableDictionaryProxy*
class CORDL_TYPE UnmodifiableDictionaryProxy : public ::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary)]{};

/// @brief Field d offset 0x10
 __declspec(property(get=__get_d, put=__set_d)) ::System::Collections::IDictionary*  d;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsFixedSize)) bool  IsFixedSize;

 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

 __declspec(property(get=get_SyncRoot)) ::System::Object*  SyncRoot;

 __declspec(property(get=get_Keys)) ::System::Collections::ICollection*  Keys;

 __declspec(property(get=get_Values)) ::System::Collections::ICollection*  Values;

constexpr void __set_d(::System::Collections::IDictionary*  value) ;

constexpr ::System::Collections::IDictionary* __get_d() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> __get_d() const;

static inline ::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy* New_ctor(::System::Collections::IDictionary*  d) ;

/// @brief Method .ctor addr 0x115752c size 0x28 virtual false final false
inline void _ctor(::System::Collections::IDictionary*  d) ;

/// @brief Method Contains addr 0x115a27c size 0xac virtual true final false
inline bool Contains(::System::Object*  k) ;

/// @brief Method CopyTo addr 0x115a328 size 0xb8 virtual true final false
inline void CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method get_Count addr 0x115a3e0 size 0xa4 virtual true final false
inline int32_t get_Count() ;

/// @brief Method GetEnumerator addr 0x115a484 size 0xa4 virtual true final false
inline ::System::Collections::IDictionaryEnumerator* GetEnumerator() ;

/// @brief Method get_IsFixedSize addr 0x115a528 size 0xa4 virtual true final false
inline bool get_IsFixedSize() ;

/// @brief Method get_IsSynchronized addr 0x115a5cc size 0xa4 virtual true final false
inline bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x115a670 size 0xa4 virtual true final false
inline ::System::Object* get_SyncRoot() ;

/// @brief Method get_Keys addr 0x115a714 size 0xa4 virtual true final false
inline ::System::Collections::ICollection* get_Keys() ;

/// @brief Method get_Values addr 0x115a7b8 size 0xa4 virtual true final false
inline ::System::Collections::ICollection* get_Values() ;

/// @brief Method GetValue addr 0x115a85c size 0xa8 virtual true final false
inline ::System::Object* GetValue(::System::Object*  k) ;

// Ctor Parameters [CppParam { name: "", ty: "UnmodifiableDictionaryProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnmodifiableDictionaryProxy(UnmodifiableDictionaryProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnmodifiableDictionaryProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnmodifiableDictionaryProxy(UnmodifiableDictionaryProxy const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnmodifiableDictionaryProxy()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy*, "Org.BouncyCastle.Utilities.Collections", "UnmodifiableDictionaryProxy");
