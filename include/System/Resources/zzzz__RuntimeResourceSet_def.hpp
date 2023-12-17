#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Resources/zzzz__ResourceSet_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeResourceSet)
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Resources {
struct ResourceLocator;
}
namespace System::IO {
class Stream;
}
namespace System::Resources {
class ResourceReader;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Resources {
class RuntimeResourceSet;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::RuntimeResourceSet);
// Type: System.Resources::RuntimeResourceSet
namespace System::Resources {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3442))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3429))
// CS Name: ::System.Resources::RuntimeResourceSet*
class CORDL_TYPE RuntimeResourceSet : public ::System::Resources::ResourceSet {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Resources::ResourceSet)]{};

/// @brief Field Version offset 0x0
static constexpr int32_t  Version{static_cast<int32_t>(0x2)};

/// @brief Field _resCache offset 0x28
 __declspec(property(get=__get__resCache, put=__set__resCache)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator>*  _resCache;

/// @brief Field _defaultReader offset 0x30
 __declspec(property(get=__get__defaultReader, put=__set__defaultReader)) ::System::Resources::ResourceReader*  _defaultReader;

/// @brief Field _caseInsensitiveTable offset 0x38
 __declspec(property(get=__get__caseInsensitiveTable, put=__set__caseInsensitiveTable)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator>*  _caseInsensitiveTable;

/// @brief Field _haveReadFromReader offset 0x40
 __declspec(property(get=__get__haveReadFromReader, put=__set__haveReadFromReader)) bool  _haveReadFromReader;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set__resCache(::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator>* __get__resCache() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator>*> __get__resCache() const;

constexpr void __set__defaultReader(::System::Resources::ResourceReader*  value) ;

constexpr ::System::Resources::ResourceReader* __get__defaultReader() ;

constexpr ::cordl_internals::to_const_pointer<::System::Resources::ResourceReader*> __get__defaultReader() const;

constexpr void __set__caseInsensitiveTable(::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator>* __get__caseInsensitiveTable() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator>*> __get__caseInsensitiveTable() const;

constexpr void __set__haveReadFromReader(bool  value) ;

constexpr bool& __get__haveReadFromReader() ;

constexpr bool const& __get__haveReadFromReader() const;

static inline ::System::Resources::RuntimeResourceSet* New_ctor(::StringW  fileName) ;

/// @brief Method .ctor addr 0x24def70 size 0x138 virtual false final false
inline void _ctor(::StringW  fileName) ;

static inline ::System::Resources::RuntimeResourceSet* New_ctor(::System::IO::Stream*  stream) ;

/// @brief Method .ctor addr 0x24df19c size 0xf8 virtual false final false
inline void _ctor(::System::IO::Stream*  stream) ;

/// @brief Method Dispose addr 0x24df294 size 0x140 virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method GetEnumerator addr 0x24df4c4 size 0x4 virtual true final false
inline ::System::Collections::IDictionaryEnumerator* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x24df5c8 size 0x4 virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetEnumeratorHelper addr 0x24df4c8 size 0x100 virtual false final false
inline ::System::Collections::IDictionaryEnumerator* GetEnumeratorHelper() ;

/// @brief Method GetString addr 0x24df5cc size 0x70 virtual true final false
inline ::StringW GetString(::StringW  key) ;

/// @brief Method GetString addr 0x24dff4c size 0x7c virtual true final false
inline ::StringW GetString(::StringW  key, bool  ignoreCase) ;

/// @brief Method GetObject addr 0x24dffc8 size 0xc virtual true final false
inline ::System::Object* GetObject(::StringW  key) ;

/// @brief Method GetObject addr 0x24dffd4 size 0xc virtual true final false
inline ::System::Object* GetObject(::StringW  key, bool  ignoreCase) ;

/// @brief Method GetObject addr 0x24df63c size 0x910 virtual false final false
inline ::System::Object* GetObject(::StringW  key, bool  ignoreCase, bool  isString) ;

/// @brief Method ResolveResourceLocator addr 0x24e0898 size 0x180 virtual false final false
inline ::System::Object* ResolveResourceLocator(::System::Resources::ResourceLocator  resLocation, ::StringW  key, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator>*  copyOfCache, bool  keyInWrongCase) ;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeResourceSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeResourceSet(RuntimeResourceSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeResourceSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeResourceSet(RuntimeResourceSet const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RuntimeResourceSet()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::RuntimeResourceSet, 0x48>, "Size mismatch!");

} // namespace end def System::Resources
NEED_NO_BOX(::System::Resources::RuntimeResourceSet);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::RuntimeResourceSet*, "System.Resources", "RuntimeResourceSet");
