#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NameCache)
namespace System {
class Object;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class NameCache;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::NameCache);
// Type: System.Runtime.Serialization.Formatters.Binary::NameCache
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3295))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::NameCache*
class CORDL_TYPE NameCache : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field name offset 0x10
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

static inline void setStaticF_ht(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::System::Object*>*  value) ;

static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::System::Object*>* getStaticF_ht() ;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

/// @brief Method GetCachedValue addr 0x24cf098 size 0xa8 virtual false final false
inline ::System::Object* GetCachedValue(::StringW  name) ;

/// @brief Method SetCachedValue addr 0x24cf540 size 0x90 virtual false final false
inline void SetCachedValue(::System::Object*  value) ;

static inline ::System::Runtime::Serialization::Formatters::Binary::NameCache* New_ctor() ;

/// @brief Method .ctor addr 0x24cb5d4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NameCache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NameCache(NameCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NameCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NameCache(NameCache const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NameCache()  = default;
public:


// Fields

// Static field ht


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::NameCache, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::NameCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::NameCache*, "System.Runtime.Serialization.Formatters.Binary", "NameCache");
