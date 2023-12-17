#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CacheDict_2)
namespace System::Dynamic::Utils {
template<typename TKey,typename TValue>
class __CacheDict_2__Entry;
}
// Forward declare root types
namespace System::Dynamic::Utils {
template<typename TKey,typename TValue>
class CacheDict_2;
}
namespace System::Dynamic::Utils {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
class CacheDict_2<TKey,TValue>;
}
namespace System::Dynamic::Utils {
template<typename TKey,typename TValue>
class __CacheDict_2__Entry;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Dynamic::Utils::CacheDict_2);
MARK_GEN_REF_PTR_T(::System::Dynamic::Utils::__CacheDict_2__Entry);
// Type: ::Entry
namespace System::Dynamic::Utils {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14308))
// CS Name: ::CacheDict`2::Entry<TKey,TValue>*
class CORDL_TYPE __CacheDict_2__Entry : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

// Ctor Parameters [CppParam { name: "", ty: "__CacheDict_2__Entry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CacheDict_2__Entry(__CacheDict_2__Entry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CacheDict_2__Entry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CacheDict_2__Entry(__CacheDict_2__Entry const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CacheDict_2__Entry()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Dynamic::Utils
// Type: System.Dynamic.Utils::CacheDict`2
// Type: System.Dynamic.Utils::CacheDict`2
namespace System::Dynamic::Utils {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14309)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14309), inst: 81 })
// CS Name: ::System.Dynamic.Utils::CacheDict`2<TKey,TValue>*
class CORDL_TYPE CacheDict_2<TKey,TValue> : public ::System::Object {
public:
// Declarations
using Entry = ::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _mask offset 0x10
 __declspec(property(get=__get__mask, put=__set__mask)) int32_t  _mask;

/// @brief Field _entries offset 0x18
 __declspec(property(get=__get__entries, put=__set__entries)) ::ArrayW<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey,TValue>*,::Array<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey,TValue>*>*>  _entries;

constexpr void __set__mask(int32_t  value) ;

constexpr int32_t& __get__mask() ;

constexpr int32_t const& __get__mask() const;

constexpr void __set__entries(::ArrayW<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey,TValue>*,::Array<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey,TValue>*>*>  value) ;

constexpr ::ArrayW<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey,TValue>*,::Array<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey,TValue>*>*>& __get__entries() ;

constexpr ::ArrayW<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey,TValue>*,::Array<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey,TValue>*>*> const& __get__entries() const;

static inline ::System::Dynamic::Utils::CacheDict_2<TKey,TValue>* New_ctor(int32_t  size) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  size) ;

/// @brief Method AlignSize addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t AlignSize(int32_t  size) ;

// Ctor Parameters [CppParam { name: "", ty: "CacheDict_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CacheDict_2(CacheDict_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CacheDict_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CacheDict_2(CacheDict_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CacheDict_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Dynamic::Utils
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Dynamic::Utils::CacheDict_2, "System.Dynamic.Utils", "CacheDict`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Dynamic::Utils::__CacheDict_2__Entry, "System.Dynamic.Utils", "CacheDict`2/Entry");
