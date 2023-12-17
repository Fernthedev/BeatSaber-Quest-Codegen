#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OVRResources)
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class Object;
}
namespace GlobalNamespace {
class __OVRResources____c__DisplayClass2_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
template<typename T>
class __OVRResources____c__DisplayClass3_0_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class __OVRResources____c__DisplayClass3_0_1;
}
namespace GlobalNamespace {
class OVRResources;
}
namespace GlobalNamespace {
class __OVRResources____c__DisplayClass2_0;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __OVRResources____c__DisplayClass3_0_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__OVRResources____c__DisplayClass3_0_1);
MARK_REF_PTR_T(::GlobalNamespace::OVRResources);
MARK_REF_PTR_T(::GlobalNamespace::__OVRResources____c__DisplayClass2_0);
// Type: ::<>c__DisplayClass2_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7951))
// CS Name: ::OVRResources::<>c__DisplayClass2_0*
class CORDL_TYPE __OVRResources____c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field path offset 0x10
 __declspec(property(get=__get_path, put=__set_path)) ::StringW  path;

constexpr void __set_path(::StringW  value) ;

constexpr ::StringW& __get_path() ;

constexpr ::StringW const& __get_path() const;

static inline ::GlobalNamespace::__OVRResources____c__DisplayClass2_0* New_ctor() ;

/// @brief Method .ctor addr 0x277f3a8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Load>b__0 addr 0x277f48c size 0x34 virtual false final false
inline bool _Load_b__0(::StringW  s) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRResources____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRResources____c__DisplayClass2_0(__OVRResources____c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRResources____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRResources____c__DisplayClass2_0(__OVRResources____c__DisplayClass2_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRResources____c__DisplayClass2_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRResources____c__DisplayClass2_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass3_0`1
// Type: ::OVRResources
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7953))
// CS Name: ::OVRResources*
class CORDL_TYPE OVRResources : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
template<typename T>
using __c__DisplayClass3_0_1 = ::GlobalNamespace::__OVRResources____c__DisplayClass3_0_1<T>;

using __c__DisplayClass2_0 = ::GlobalNamespace::__OVRResources____c__DisplayClass2_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::MonoBehaviour)]{};

static inline void setStaticF_resourceBundle(::UnityEngine::AssetBundle*  value) ;

static inline ::UnityEngine::AssetBundle* getStaticF_resourceBundle() ;

static inline void setStaticF_assetNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_assetNames() ;

/// @brief Method Load addr 0x277f1c4 size 0x1e4 virtual false final false
static inline ::UnityEngine::Object* Load(::StringW  path) ;

/// @brief Method Load addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T Load(::StringW  path) ;

/// @brief Method SetResourceBundle addr 0x277f3b0 size 0xd4 virtual false final false
static inline void SetResourceBundle(::UnityEngine::AssetBundle*  bundle) ;

static inline ::GlobalNamespace::OVRResources* New_ctor() ;

/// @brief Method .ctor addr 0x277f484 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRResources", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRResources(OVRResources && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRResources", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRResources(OVRResources const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRResources()  = default;
public:


// Fields

// Static field resourceBundle

// Static field assetNames


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRResources, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass3_0`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(7952))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7952), inst: 2 })
// CS Name: ::OVRResources::<>c__DisplayClass3_0`1<T>*
class CORDL_TYPE __OVRResources____c__DisplayClass3_0_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field path offset 0x10
 __declspec(property(get=__get_path, put=__set_path)) ::StringW  path;

constexpr void __set_path(::StringW  value) ;

constexpr ::StringW& __get_path() ;

constexpr ::StringW const& __get_path() const;

static inline ::GlobalNamespace::__OVRResources____c__DisplayClass3_0_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <Load>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _Load_b__0(::StringW  s) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRResources____c__DisplayClass3_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRResources____c__DisplayClass3_0_1(__OVRResources____c__DisplayClass3_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRResources____c__DisplayClass3_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRResources____c__DisplayClass3_0_1(__OVRResources____c__DisplayClass3_0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRResources____c__DisplayClass3_0_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__OVRResources____c__DisplayClass3_0_1, "", "OVRResources/<>c__DisplayClass3_0`1");
NEED_NO_BOX(::GlobalNamespace::OVRResources);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRResources*, "", "OVRResources");
NEED_NO_BOX(::GlobalNamespace::__OVRResources____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRResources____c__DisplayClass2_0*, "", "OVRResources/<>c__DisplayClass2_0");
