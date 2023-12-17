#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentLightGroups)
namespace GlobalNamespace {
class IEnvironmentLightGroups;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class LightGroupSO;
}
namespace GlobalNamespace {
class __EnvironmentLightGroups____c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class ILightGroup;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentLightGroups;
}
namespace GlobalNamespace {
class __EnvironmentLightGroups____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentLightGroups);
MARK_REF_PTR_T(::GlobalNamespace::__EnvironmentLightGroups____c);
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4175))
// CS Name: ::EnvironmentLightGroups::<>c*
class CORDL_TYPE __EnvironmentLightGroups____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__EnvironmentLightGroups____c*  value) ;

static inline ::GlobalNamespace::__EnvironmentLightGroups____c* getStaticF___9() ;

static inline void setStaticF___9__6_0(::System::Func_2<::GlobalNamespace::LightGroupSO*,int32_t>*  value) ;

static inline ::System::Func_2<::GlobalNamespace::LightGroupSO*,int32_t>* getStaticF___9__6_0() ;

static inline ::GlobalNamespace::__EnvironmentLightGroups____c* New_ctor() ;

/// @brief Method .ctor addr 0x22408e8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Sort>b__6_0 addr 0x22408f0 size 0x18 virtual false final false
inline int32_t _Sort_b__6_0(::GlobalNamespace::LightGroupSO*  s) ;

// Ctor Parameters [CppParam { name: "", ty: "__EnvironmentLightGroups____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__EnvironmentLightGroups____c(__EnvironmentLightGroups____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__EnvironmentLightGroups____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__EnvironmentLightGroups____c(__EnvironmentLightGroups____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __EnvironmentLightGroups____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__6_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnvironmentLightGroups____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::EnvironmentLightGroups
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4176))
// CS Name: ::EnvironmentLightGroups*
class CORDL_TYPE EnvironmentLightGroups : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__EnvironmentLightGroups____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _lightGroupSOList offset 0x10
 __declspec(property(get=__get__lightGroupSOList, put=__set__lightGroupSOList)) ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*  _lightGroupSOList;

/// @brief Field _lightGroupSODict offset 0x18
 __declspec(property(get=__get__lightGroupSODict, put=__set__lightGroupSODict)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::LightGroupSO*>*  _lightGroupSODict;

/// @brief Field _lightGroupSOListForLightGroupDataDict offset 0x20
 __declspec(property(get=__get__lightGroupSOListForLightGroupDataDict, put=__set__lightGroupSOListForLightGroupDataDict)) ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*  _lightGroupSOListForLightGroupDataDict;

 __declspec(property(get=get_lightGroupSOList)) ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*  lightGroupSOList;

/// @brief Convert operator to "::GlobalNamespace::IEnvironmentLightGroups"
constexpr operator  ::GlobalNamespace::IEnvironmentLightGroups*() noexcept;

constexpr void __set__lightGroupSOList(::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>* __get__lightGroupSOList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*> __get__lightGroupSOList() const;

constexpr void __set__lightGroupSODict(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::LightGroupSO*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::LightGroupSO*>* __get__lightGroupSODict() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::LightGroupSO*>*> __get__lightGroupSODict() const;

constexpr void __set__lightGroupSOListForLightGroupDataDict(::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>* __get__lightGroupSOListForLightGroupDataDict() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*> __get__lightGroupSOListForLightGroupDataDict() const;

/// @brief Method get_lightGroupSOList addr 0x2240508 size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>* get_lightGroupSOList() ;

/// @brief Method GetDataForGroup addr 0x2240510 size 0x24c virtual true final true
inline ::GlobalNamespace::ILightGroup* GetDataForGroup(int32_t  groupId) ;

/// @brief Method Sort addr 0x224075c size 0x120 virtual true final true
inline void Sort() ;

static inline ::GlobalNamespace::EnvironmentLightGroups* New_ctor() ;

/// @brief Method .ctor addr 0x224087c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentLightGroups", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentLightGroups(EnvironmentLightGroups && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentLightGroups", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentLightGroups(EnvironmentLightGroups const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnvironmentLightGroups()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentLightGroups, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentLightGroups);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentLightGroups*, "", "EnvironmentLightGroups");
NEED_NO_BOX(::GlobalNamespace::__EnvironmentLightGroups____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnvironmentLightGroups____c*, "", "EnvironmentLightGroups/<>c");
