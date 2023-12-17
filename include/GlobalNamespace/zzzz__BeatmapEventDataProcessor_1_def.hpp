#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapEventDataProcessor_1)
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace GlobalNamespace {
template<typename T>
class ISortedListItemProcessor_1;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class BeatmapEventDataProcessor_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class BeatmapEventDataProcessor_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::BeatmapEventDataProcessor_1);
// Type: ::BeatmapEventDataProcessor`1
// Type: ::BeatmapEventDataProcessor`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14741))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14741), inst: 2 })
// CS Name: ::BeatmapEventDataProcessor`1<T>*
class CORDL_TYPE BeatmapEventDataProcessor_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Convert operator to "::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapDataItem*>"
constexpr operator  ::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapDataItem*>*() noexcept;

/// @brief Method ProcessInsertedData addr 0x0 size 0xffffffffffffffff virtual true final true
inline void ProcessInsertedData(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*  insertedNode) ;

/// @brief Method ProcessBeforeDeleteData addr 0x0 size 0xffffffffffffffff virtual true final true
inline void ProcessBeforeDeleteData(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*  nodeToDelete) ;

/// @brief Method ProcessBeforeDeleteEventDataCommon addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void ProcessBeforeDeleteEventDataCommon(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*  nodeToDelete) ;

/// @brief Method ProcessInsertedEventDataCommon addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void ProcessInsertedEventDataCommon(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*  insertedNode) ;

/// @brief Method ProcessInsertedEventDataInternal addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*  insertedNode) ;

/// @brief Method ProcessBeforeDeleteEventDataInternal addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*  nodeToDelete) ;

static inline ::GlobalNamespace::BeatmapEventDataProcessor_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataProcessor_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapEventDataProcessor_1(BeatmapEventDataProcessor_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataProcessor_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapEventDataProcessor_1(BeatmapEventDataProcessor_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapEventDataProcessor_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::BeatmapEventDataProcessor_1, "", "BeatmapEventDataProcessor`1");
