#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnumTableViewDataSource_1)
namespace GlobalNamespace {
class TextOnlyTableCell;
}
namespace HMUI {
class TableView;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class __TableView__IDataSource;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class EnumTableViewDataSource_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class EnumTableViewDataSource_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::EnumTableViewDataSource_1);
// Type: ::EnumTableViewDataSource`1
// Type: ::EnumTableViewDataSource`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4684)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4684), inst: 2 })
// CS Name: ::EnumTableViewDataSource`1<T>*
class CORDL_TYPE EnumTableViewDataSource_1<T> : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kCellReuseIdentifier offset 0x0
static constexpr ::ConstString  kCellReuseIdentifier{u"Cell"};

/// @brief Field _cellPrefab offset 0x18
 __declspec(property(get=__get__cellPrefab, put=__set__cellPrefab)) ::GlobalNamespace::TextOnlyTableCell*  _cellPrefab;

/// @brief Field _cellHeight offset 0x20
 __declspec(property(get=__get__cellHeight, put=__set__cellHeight)) float_t  _cellHeight;

/// @brief Field _values offset 0x28
 __declspec(property(get=__get__values, put=__set__values)) ::ArrayW<T,::Array<T>*>  _values;

/// @brief Convert operator to "::HMUI::__TableView__IDataSource"
constexpr operator  ::HMUI::__TableView__IDataSource*() noexcept;

constexpr void __set__cellPrefab(::GlobalNamespace::TextOnlyTableCell*  value) ;

constexpr ::GlobalNamespace::TextOnlyTableCell* __get__cellPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TextOnlyTableCell*> __get__cellPrefab() const;

constexpr void __set__cellHeight(float_t  value) ;

constexpr float_t& __get__cellHeight() ;

constexpr float_t const& __get__cellHeight() const;

constexpr void __set__values(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get__values() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get__values() const;

/// @brief Method CellSize addr 0x0 size 0xffffffffffffffff virtual true final true
inline float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t NumberOfCells() ;

/// @brief Method CellForIdx addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::HMUI::TableCell* CellForIdx(::HMUI::TableView*  tableView, int32_t  idx) ;

/// @brief Method GetIdForValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetIdForValue(T  value) ;

/// @brief Method GetLabelForId addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW GetLabelForId(int32_t  id) ;

/// @brief Method GetValueForId addr 0x0 size 0xffffffffffffffff virtual false final false
inline T GetValueForId(int32_t  id) ;

/// @brief Method GetLabelForValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW GetLabelForValue(T  value) ;

static inline ::GlobalNamespace::EnumTableViewDataSource_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnumTableViewDataSource_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumTableViewDataSource_1(EnumTableViewDataSource_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumTableViewDataSource_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumTableViewDataSource_1(EnumTableViewDataSource_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumTableViewDataSource_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::EnumTableViewDataSource_1, "", "EnumTableViewDataSource`1");
