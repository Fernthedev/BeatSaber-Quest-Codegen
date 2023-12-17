#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpaceQuery)
namespace GlobalNamespace {
struct __OVRSpaceQuery__Options;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceQueryInfo;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceQueryActionType;
}
namespace GlobalNamespace {
struct __OVRSpace__StorageLocation;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceQueryType;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSpaceQuery;
}
namespace GlobalNamespace {
struct __OVRSpaceQuery__Options;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSpaceQuery);
MARK_VAL_T(::GlobalNamespace::__OVRSpaceQuery__Options);
// Type: ::Options
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7992))
// CS Name: ::OVRSpaceQuery::Options
struct CORDL_TYPE __OVRSpaceQuery__Options : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field MaxUuidCount offset 0x0
static constexpr int32_t  MaxUuidCount{static_cast<int32_t>(0x400)};

/// @brief Field <MaxResults>k__BackingField offset 0x0
 __declspec(property(get=__get__MaxResults_k__BackingField, put=__set__MaxResults_k__BackingField)) int32_t  _MaxResults_k__BackingField;

/// @brief Field <Timeout>k__BackingField offset 0x8
 __declspec(property(get=__get__Timeout_k__BackingField, put=__set__Timeout_k__BackingField)) double_t  _Timeout_k__BackingField;

/// @brief Field <Location>k__BackingField offset 0x10
 __declspec(property(get=__get__Location_k__BackingField, put=__set__Location_k__BackingField)) ::GlobalNamespace::__OVRSpace__StorageLocation  _Location_k__BackingField;

/// @brief Field <QueryType>k__BackingField offset 0x14
 __declspec(property(get=__get__QueryType_k__BackingField, put=__set__QueryType_k__BackingField)) ::GlobalNamespace::__OVRPlugin__SpaceQueryType  _QueryType_k__BackingField;

/// @brief Field <ActionType>k__BackingField offset 0x18
 __declspec(property(get=__get__ActionType_k__BackingField, put=__set__ActionType_k__BackingField)) ::GlobalNamespace::__OVRPlugin__SpaceQueryActionType  _ActionType_k__BackingField;

/// @brief Field _componentType offset 0x1c
 __declspec(property(get=__get__componentType, put=__set__componentType)) ::GlobalNamespace::__OVRPlugin__SpaceComponentType  _componentType;

/// @brief Field _uuidFilter offset 0x20
 __declspec(property(get=__get__uuidFilter, put=__set__uuidFilter)) ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  _uuidFilter;

 __declspec(property(get=get_MaxResults, put=set_MaxResults)) int32_t  MaxResults;

 __declspec(property(get=get_Timeout, put=set_Timeout)) double_t  Timeout;

 __declspec(property(get=get_Location, put=set_Location)) ::GlobalNamespace::__OVRSpace__StorageLocation  Location;

 __declspec(property(get=get_QueryType, put=set_QueryType)) ::GlobalNamespace::__OVRPlugin__SpaceQueryType  QueryType;

 __declspec(property(get=get_ActionType, put=set_ActionType)) ::GlobalNamespace::__OVRPlugin__SpaceQueryActionType  ActionType;

 __declspec(property(get=get_ComponentFilter, put=set_ComponentFilter)) ::GlobalNamespace::__OVRPlugin__SpaceComponentType  ComponentFilter;

 __declspec(property(get=get_UuidFilter, put=set_UuidFilter)) ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  UuidFilter;

static inline void setStaticF_Ids(::ArrayW<::System::Guid,::Array<::System::Guid>*>  value) ;

static inline ::ArrayW<::System::Guid,::Array<::System::Guid>*> getStaticF_Ids() ;

static inline void setStaticF_ComponentTypes(::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType,::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*>  value) ;

static inline ::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType,::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*> getStaticF_ComponentTypes() ;

constexpr void __set__MaxResults_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__MaxResults_k__BackingField() ;

constexpr int32_t const& __get__MaxResults_k__BackingField() const;

constexpr void __set__Timeout_k__BackingField(double_t  value) ;

constexpr double_t& __get__Timeout_k__BackingField() ;

constexpr double_t const& __get__Timeout_k__BackingField() const;

constexpr void __set__Location_k__BackingField(::GlobalNamespace::__OVRSpace__StorageLocation  value) ;

constexpr ::GlobalNamespace::__OVRSpace__StorageLocation& __get__Location_k__BackingField() ;

constexpr ::GlobalNamespace::__OVRSpace__StorageLocation const& __get__Location_k__BackingField() const;

constexpr void __set__QueryType_k__BackingField(::GlobalNamespace::__OVRPlugin__SpaceQueryType  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__SpaceQueryType& __get__QueryType_k__BackingField() ;

constexpr ::GlobalNamespace::__OVRPlugin__SpaceQueryType const& __get__QueryType_k__BackingField() const;

constexpr void __set__ActionType_k__BackingField(::GlobalNamespace::__OVRPlugin__SpaceQueryActionType  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__SpaceQueryActionType& __get__ActionType_k__BackingField() ;

constexpr ::GlobalNamespace::__OVRPlugin__SpaceQueryActionType const& __get__ActionType_k__BackingField() const;

constexpr void __set__componentType(::GlobalNamespace::__OVRPlugin__SpaceComponentType  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__SpaceComponentType& __get__componentType() ;

constexpr ::GlobalNamespace::__OVRPlugin__SpaceComponentType const& __get__componentType() const;

constexpr void __set__uuidFilter(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::System::Guid>* __get__uuidFilter() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::System::Guid>*> __get__uuidFilter() const;

/// @brief Method get_MaxResults addr 0x278ca44 size 0x8 virtual false final false
inline int32_t get_MaxResults() ;

/// @brief Method set_MaxResults addr 0x278ca4c size 0x8 virtual false final false
inline void set_MaxResults(int32_t  value) ;

/// @brief Method get_Timeout addr 0x278ca54 size 0x8 virtual false final false
inline double_t get_Timeout() ;

/// @brief Method set_Timeout addr 0x278ca5c size 0x8 virtual false final false
inline void set_Timeout(double_t  value) ;

/// @brief Method get_Location addr 0x278ca64 size 0x8 virtual false final false
inline ::GlobalNamespace::__OVRSpace__StorageLocation get_Location() ;

/// @brief Method set_Location addr 0x278ca6c size 0x8 virtual false final false
inline void set_Location(::GlobalNamespace::__OVRSpace__StorageLocation  value) ;

/// @brief Method get_QueryType addr 0x278ca74 size 0x8 virtual false final false
inline ::GlobalNamespace::__OVRPlugin__SpaceQueryType get_QueryType() ;

/// @brief Method set_QueryType addr 0x278ca7c size 0x8 virtual false final false
inline void set_QueryType(::GlobalNamespace::__OVRPlugin__SpaceQueryType  value) ;

/// @brief Method get_ActionType addr 0x278ca84 size 0x8 virtual false final false
inline ::GlobalNamespace::__OVRPlugin__SpaceQueryActionType get_ActionType() ;

/// @brief Method set_ActionType addr 0x278ca8c size 0x8 virtual false final false
inline void set_ActionType(::GlobalNamespace::__OVRPlugin__SpaceQueryActionType  value) ;

/// @brief Method get_ComponentFilter addr 0x278ca94 size 0x8 virtual false final false
inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType get_ComponentFilter() ;

/// @brief Method set_ComponentFilter addr 0x278ca9c size 0x70 virtual false final false
inline void set_ComponentFilter(::GlobalNamespace::__OVRPlugin__SpaceComponentType  value) ;

/// @brief Method get_UuidFilter addr 0x278cb68 size 0x8 virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Guid>* get_UuidFilter() ;

/// @brief Method set_UuidFilter addr 0x278cb70 size 0x1e0 virtual false final false
inline void set_UuidFilter(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  value) ;

/// @brief Method .ctor addr 0x278cd50 size 0x34 virtual false final false
inline void _ctor(::GlobalNamespace::__OVRSpaceQuery__Options  other) ;

/// @brief Method ToQueryInfo addr 0x278cd84 size 0x374 virtual false final false
inline ::GlobalNamespace::__OVRPlugin__SpaceQueryInfo ToQueryInfo() ;

/// @brief Method TryQuerySpaces addr 0x278d0f8 size 0x15c virtual false final false
inline bool TryQuerySpaces(ByRef<uint64_t>  requestId) ;

/// @brief Method ValidateSingleFilter addr 0x278cb0c size 0x5c virtual false final false
static inline void ValidateSingleFilter(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuidFilter, ::GlobalNamespace::__OVRPlugin__SpaceComponentType  componentFilter) ;

// Ctor Parameters [CppParam { name: "_MaxResults_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Timeout_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "_Location_k__BackingField", ty: "::GlobalNamespace::__OVRSpace__StorageLocation", modifiers: "", def_value: None }, CppParam { name: "_QueryType_k__BackingField", ty: "::GlobalNamespace::__OVRPlugin__SpaceQueryType", modifiers: "", def_value: None }, CppParam { name: "_ActionType_k__BackingField", ty: "::GlobalNamespace::__OVRPlugin__SpaceQueryActionType", modifiers: "", def_value: None }, CppParam { name: "_componentType", ty: "::GlobalNamespace::__OVRPlugin__SpaceComponentType", modifiers: "", def_value: None }, CppParam { name: "_uuidFilter", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: None }]
constexpr __OVRSpaceQuery__Options(int32_t  _MaxResults_k__BackingField, double_t  _Timeout_k__BackingField, ::GlobalNamespace::__OVRSpace__StorageLocation  _Location_k__BackingField, ::GlobalNamespace::__OVRPlugin__SpaceQueryType  _QueryType_k__BackingField, ::GlobalNamespace::__OVRPlugin__SpaceQueryActionType  _ActionType_k__BackingField, ::GlobalNamespace::__OVRPlugin__SpaceComponentType  _componentType, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  _uuidFilter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRSpaceQuery__Options(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRSpaceQuery__Options()  = default;


// Fields

// Static field Ids

// Static field ComponentTypes


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSpaceQuery__Options, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRSpaceQuery
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7993))
// CS Name: ::OVRSpaceQuery*
class CORDL_TYPE OVRSpaceQuery : public ::System::Object {
public:
// Declarations
using Options = ::GlobalNamespace::__OVRSpaceQuery__Options;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

// Ctor Parameters [CppParam { name: "", ty: "OVRSpaceQuery", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSpaceQuery(OVRSpaceQuery && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSpaceQuery", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSpaceQuery(OVRSpaceQuery const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRSpaceQuery()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpaceQuery, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSpaceQuery);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpaceQuery*, "", "OVRSpaceQuery");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSpaceQuery__Options, "", "OVRSpaceQuery/Options");
