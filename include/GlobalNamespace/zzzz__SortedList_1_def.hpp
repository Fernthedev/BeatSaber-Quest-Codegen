#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SortedList_2_def.hpp"
CORDL_MODULE_EXPORT(SortedList_1)
namespace GlobalNamespace {
template<typename T>
class ISortedListItemProcessor_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TBase>
class SortedList_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TBase>
class SortedList_1<TBase>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::SortedList_1);
// Type: ::SortedList`1
// Type: ::SortedList`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TBase>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14780)), TypeDefinitionIndex(TypeDefinitionIndex(14779)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14780), inst: 4984 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14779), inst: 2 })
// CS Name: ::SortedList`1<TBase>*
class CORDL_TYPE SortedList_1<TBase> : public ::GlobalNamespace::SortedList_2<TBase,TBase> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::SortedList_2<TBase,TBase>)]{};

static inline ::GlobalNamespace::SortedList_1<TBase>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::GlobalNamespace::SortedList_1<TBase>* New_ctor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>*  sortedListDataProcessor) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>*  sortedListDataProcessor) ;

// Ctor Parameters [CppParam { name: "", ty: "SortedList_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SortedList_1(SortedList_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SortedList_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SortedList_1(SortedList_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SortedList_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::SortedList_1, "", "SortedList`1");
