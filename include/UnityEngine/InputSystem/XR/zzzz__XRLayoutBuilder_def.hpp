#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRLayoutBuilder)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::InputSystem::XR {
class __XRLayoutBuilder____c__DisplayClass5_0;
}
namespace UnityEngine::InputSystem::XR {
struct XRFeatureDescriptor;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceExecuteCommandDelegate;
}
namespace UnityEngine::InputSystem::XR {
class XRDeviceDescriptor;
}
namespace UnityEngine::InputSystem::XR {
struct FeatureType;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class XRLayoutBuilder;
}
namespace UnityEngine::InputSystem::XR {
class __XRLayoutBuilder____c__DisplayClass5_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::XR::XRLayoutBuilder);
MARK_REF_PTR_T(::UnityEngine::InputSystem::XR::__XRLayoutBuilder____c__DisplayClass5_0);
// Type: ::<>c__DisplayClass5_0
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6330))
// CS Name: ::XRLayoutBuilder::<>c__DisplayClass5_0*
class CORDL_TYPE __XRLayoutBuilder____c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field layout offset 0x10
 __declspec(property(get=__get_layout, put=__set_layout)) ::UnityEngine::InputSystem::XR::XRLayoutBuilder*  layout;

constexpr void __set_layout(::UnityEngine::InputSystem::XR::XRLayoutBuilder*  value) ;

constexpr ::UnityEngine::InputSystem::XR::XRLayoutBuilder* __get_layout() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::XR::XRLayoutBuilder*> __get_layout() const;

static inline ::UnityEngine::InputSystem::XR::__XRLayoutBuilder____c__DisplayClass5_0* New_ctor() ;

/// @brief Method .ctor addr 0x2ac7288 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <OnFindLayoutForDevice>b__0 addr 0x2ac8310 size 0x18 virtual false final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* _OnFindLayoutForDevice_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__XRLayoutBuilder____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__XRLayoutBuilder____c__DisplayClass5_0(__XRLayoutBuilder____c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__XRLayoutBuilder____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__XRLayoutBuilder____c__DisplayClass5_0(__XRLayoutBuilder____c__DisplayClass5_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __XRLayoutBuilder____c__DisplayClass5_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::__XRLayoutBuilder____c__DisplayClass5_0, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XR
// Type: UnityEngine.InputSystem.XR::XRLayoutBuilder
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6331))
// CS Name: ::UnityEngine.InputSystem.XR::XRLayoutBuilder*
class CORDL_TYPE XRLayoutBuilder : public ::System::Object {
public:
// Declarations
using __c__DisplayClass5_0 = ::UnityEngine::InputSystem::XR::__XRLayoutBuilder____c__DisplayClass5_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field parentLayout offset 0x10
 __declspec(property(get=__get_parentLayout, put=__set_parentLayout)) ::StringW  parentLayout;

/// @brief Field interfaceName offset 0x18
 __declspec(property(get=__get_interfaceName, put=__set_interfaceName)) ::StringW  interfaceName;

/// @brief Field descriptor offset 0x20
 __declspec(property(get=__get_descriptor, put=__set_descriptor)) ::UnityEngine::InputSystem::XR::XRDeviceDescriptor*  descriptor;

constexpr void __set_parentLayout(::StringW  value) ;

constexpr ::StringW& __get_parentLayout() ;

constexpr ::StringW const& __get_parentLayout() const;

constexpr void __set_interfaceName(::StringW  value) ;

constexpr ::StringW& __get_interfaceName() ;

constexpr ::StringW const& __get_interfaceName() const;

constexpr void __set_descriptor(::UnityEngine::InputSystem::XR::XRDeviceDescriptor*  value) ;

constexpr ::UnityEngine::InputSystem::XR::XRDeviceDescriptor* __get_descriptor() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*> __get_descriptor() const;

static inline void setStaticF_poseSubControlNames(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_poseSubControlNames() ;

static inline void setStaticF_poseSubControlTypes(::ArrayW<::UnityEngine::InputSystem::XR::FeatureType,::Array<::UnityEngine::InputSystem::XR::FeatureType>*>  value) ;

static inline ::ArrayW<::UnityEngine::InputSystem::XR::FeatureType,::Array<::UnityEngine::InputSystem::XR::FeatureType>*> getStaticF_poseSubControlTypes() ;

/// @brief Method GetSizeOfFeature addr 0x2ac6c5c size 0x78 virtual false final false
static inline uint32_t GetSizeOfFeature(::UnityEngine::InputSystem::XR::XRFeatureDescriptor  featureDescriptor) ;

/// @brief Method SanitizeString addr 0x2ac6cd4 size 0x160 virtual false final false
static inline ::StringW SanitizeString(::StringW  original, bool  allowPaths) ;

/// @brief Method OnFindLayoutForDevice addr 0x2ac6e34 size 0x454 virtual false final false
static inline ::StringW OnFindLayoutForDevice(ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>  description, ::StringW  matchedLayout, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*  executeCommandDelegate) ;

/// @brief Method ConvertPotentialAliasToName addr 0x2ac7298 size 0x17c virtual false final false
static inline ::StringW ConvertPotentialAliasToName(::UnityEngine::InputSystem::Layouts::InputControlLayout*  layout, ::StringW  nameOrAlias) ;

/// @brief Method IsSubControl addr 0x2ac7414 size 0x1c virtual false final false
inline bool IsSubControl(::StringW  name) ;

/// @brief Method GetParentControlName addr 0x2ac7430 size 0x38 virtual false final false
inline ::StringW GetParentControlName(::StringW  name) ;

/// @brief Method IsPoseControl addr 0x2ac7468 size 0x154 virtual false final false
inline bool IsPoseControl(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>*  features, int32_t  startIndex) ;

/// @brief Method Build addr 0x2ac75bc size 0xb04 virtual false final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* Build() ;

static inline ::UnityEngine::InputSystem::XR::XRLayoutBuilder* New_ctor() ;

/// @brief Method .ctor addr 0x2ac7290 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "XRLayoutBuilder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XRLayoutBuilder(XRLayoutBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRLayoutBuilder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRLayoutBuilder(XRLayoutBuilder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XRLayoutBuilder()  = default;
public:


// Fields

// Static field poseSubControlNames

// Static field poseSubControlTypes


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::XRLayoutBuilder, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XR
NEED_NO_BOX(::UnityEngine::InputSystem::XR::XRLayoutBuilder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::XRLayoutBuilder*, "UnityEngine.InputSystem.XR", "XRLayoutBuilder");
NEED_NO_BOX(::UnityEngine::InputSystem::XR::__XRLayoutBuilder____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::__XRLayoutBuilder____c__DisplayClass5_0*, "UnityEngine.InputSystem.XR", "XRLayoutBuilder/<>c__DisplayClass5_0");
