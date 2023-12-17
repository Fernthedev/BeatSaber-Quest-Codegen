#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpListenerPrefixCollection)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net {
class HttpListener;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace System::Net {
class HttpListenerPrefixCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HttpListenerPrefixCollection);
// Type: System.Net::HttpListenerPrefixCollection
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9174))
// CS Name: ::System.Net::HttpListenerPrefixCollection*
class CORDL_TYPE HttpListenerPrefixCollection : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field prefixes offset 0x10
 __declspec(property(get=__get_prefixes, put=__set_prefixes)) ::System::Collections::Generic::List_1<::StringW>*  prefixes;

/// @brief Field listener offset 0x18
 __declspec(property(get=__get_listener, put=__set_listener)) ::System::Net::HttpListener*  listener;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::StringW>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set_prefixes(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* __get_prefixes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> __get_prefixes() const;

constexpr void __set_listener(::System::Net::HttpListener*  value) ;

constexpr ::System::Net::HttpListener* __get_listener() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListener*> __get_listener() const;

static inline ::System::Net::HttpListenerPrefixCollection* New_ctor(::System::Net::HttpListener*  listener) ;

/// @brief Method .ctor addr 0x29c7ecc size 0x90 virtual false final false
inline void _ctor(::System::Net::HttpListener*  listener) ;

/// @brief Method get_Count addr 0x29c93d0 size 0x48 virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly addr 0x29c9988 size 0x8 virtual true final true
inline bool get_IsReadOnly() ;

/// @brief Method Add addr 0x29c9990 size 0x130 virtual true final true
inline void Add(::StringW  uriPrefix) ;

/// @brief Method Clear addr 0x29c9ac0 size 0xb8 virtual true final true
inline void Clear() ;

/// @brief Method Contains addr 0x29c9b78 size 0x64 virtual true final true
inline bool Contains(::StringW  uriPrefix) ;

/// @brief Method CopyTo addr 0x29c9bdc size 0x74 virtual true final true
inline void CopyTo(::ArrayW<::StringW,::Array<::StringW>*>  array, int32_t  offset) ;

/// @brief Method GetEnumerator addr 0x29c3c60 size 0x90 virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::StringW>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x29c9c50 size 0x90 virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Remove addr 0x29c9ce0 size 0x108 virtual true final true
inline bool Remove(::StringW  uriPrefix) ;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerPrefixCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpListenerPrefixCollection(HttpListenerPrefixCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerPrefixCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpListenerPrefixCollection(HttpListenerPrefixCollection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HttpListenerPrefixCollection()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HttpListenerPrefixCollection, 0x20>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::HttpListenerPrefixCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpListenerPrefixCollection*, "System.Net", "HttpListenerPrefixCollection");
