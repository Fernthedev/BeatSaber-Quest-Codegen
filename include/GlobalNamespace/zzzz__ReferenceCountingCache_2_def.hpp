#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReferenceCountingCache_2)
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class IReferenceCountingCache_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class ReferenceCountingCache_2;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
class ReferenceCountingCache_2<TKey,TValue>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TValue>
class ReferenceCountingCache_2<int32_t,TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ReferenceCountingCache_2);
// Type: ::ReferenceCountingCache`2
// Type: ::ReferenceCountingCache`2
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(5912))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5912), inst: 1610 })
// CS Name: ::ReferenceCountingCache`2<TKey,TValue>*
class CORDL_TYPE ReferenceCountingCache_2<int32_t,TValue> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _items offset 0x10
 __declspec(property(get=__get__items, put=__set__items)) ::System::Collections::Generic::Dictionary_2<int32_t,TValue>*  _items;

/// @brief Field _referencesCount offset 0x18
 __declspec(property(get=__get__referencesCount, put=__set__referencesCount)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  _referencesCount;

/// @brief Convert operator to "::GlobalNamespace::IReferenceCountingCache_2<int32_t,TValue>"
constexpr operator  ::GlobalNamespace::IReferenceCountingCache_2<int32_t,TValue>*() noexcept;

constexpr void __set__items(::System::Collections::Generic::Dictionary_2<int32_t,TValue>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,TValue>* __get__items() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,TValue>*> __get__items() const;

constexpr void __set__referencesCount(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* __get__referencesCount() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*> __get__referencesCount() const;

/// @brief Method Insert addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t Insert(int32_t  key, TValue  item) ;

/// @brief Method AddReference addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t AddReference(int32_t  key) ;

/// @brief Method RemoveReference addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t RemoveReference(int32_t  key) ;

/// @brief Method GetReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t GetReferenceCount(int32_t  key) ;

/// @brief Method TryGet addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool TryGet(int32_t  key, ByRef<TValue>  result) ;

/// @brief Method LogError addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void LogError(::StringW  message) ;

static inline ::GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ReferenceCountingCache_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReferenceCountingCache_2(ReferenceCountingCache_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReferenceCountingCache_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReferenceCountingCache_2(ReferenceCountingCache_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ReferenceCountingCache_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ReferenceCountingCache`2
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5912)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5912), inst: 81 })
// CS Name: ::ReferenceCountingCache`2<TKey,TValue>*
class CORDL_TYPE ReferenceCountingCache_2<TKey,TValue> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _items offset 0x10
 __declspec(property(get=__get__items, put=__set__items)) ::System::Collections::Generic::Dictionary_2<TKey,TValue>*  _items;

/// @brief Field _referencesCount offset 0x18
 __declspec(property(get=__get__referencesCount, put=__set__referencesCount)) ::System::Collections::Generic::Dictionary_2<TKey,int32_t>*  _referencesCount;

/// @brief Convert operator to "::GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>"
constexpr operator  ::GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>*() noexcept;

constexpr void __set__items(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<TKey,TValue>* __get__items() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey,TValue>*> __get__items() const;

constexpr void __set__referencesCount(::System::Collections::Generic::Dictionary_2<TKey,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<TKey,int32_t>* __get__referencesCount() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey,int32_t>*> __get__referencesCount() const;

/// @brief Method Insert addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t Insert(TKey  key, TValue  item) ;

/// @brief Method AddReference addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t AddReference(TKey  key) ;

/// @brief Method RemoveReference addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t RemoveReference(TKey  key) ;

/// @brief Method GetReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t GetReferenceCount(TKey  key) ;

/// @brief Method TryGet addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool TryGet(TKey  key, ByRef<TValue>  result) ;

/// @brief Method LogError addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void LogError(::StringW  message) ;

static inline ::GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ReferenceCountingCache_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReferenceCountingCache_2(ReferenceCountingCache_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReferenceCountingCache_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReferenceCountingCache_2(ReferenceCountingCache_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ReferenceCountingCache_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ReferenceCountingCache_2, "", "ReferenceCountingCache`2");
