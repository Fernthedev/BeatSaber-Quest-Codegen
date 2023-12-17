#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_1_def.hpp"
CORDL_MODULE_EXPORT(DictionaryPool_2)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Zenject {
template<typename TKey,typename TValue>
class DictionaryPool_2;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
class DictionaryPool_2<TKey,TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::DictionaryPool_2);
// Type: Zenject::DictionaryPool`2
// Type: Zenject::DictionaryPool`2
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11086), inst: 2802 }), TypeDefinitionIndex(TypeDefinitionIndex(11095)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3824), inst: 1186 }), TypeDefinitionIndex(TypeDefinitionIndex(3824)), TypeDefinitionIndex(TypeDefinitionIndex(11086))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11095), inst: 81 })
// CS Name: ::Zenject::DictionaryPool`2<TKey,TValue>*
class CORDL_TYPE DictionaryPool_2<TKey,TValue> : public ::Zenject::StaticMemoryPool_1<::System::Collections::Generic::Dictionary_2<TKey,TValue>*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::StaticMemoryPool_1<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>)]{};

static inline void setStaticF__instance(::Zenject::DictionaryPool_2<TKey,TValue>*  value) ;

static inline ::Zenject::DictionaryPool_2<TKey,TValue>* getStaticF__instance() ;

static inline ::Zenject::DictionaryPool_2<TKey,TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method get_Instance addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::DictionaryPool_2<TKey,TValue>* get_Instance() ;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void OnSpawned(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  items) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void OnDespawned(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  items) ;

// Ctor Parameters [CppParam { name: "", ty: "DictionaryPool_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DictionaryPool_2(DictionaryPool_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DictionaryPool_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DictionaryPool_2(DictionaryPool_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DictionaryPool_2()  = default;
public:


// Fields

// Static field _instance


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::DictionaryPool_2, "Zenject", "DictionaryPool`2");
