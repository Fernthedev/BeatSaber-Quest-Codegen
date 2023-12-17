#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MovedFromAttributeData)
// Forward declare root types
namespace UnityEngine::Scripting::APIUpdating {
struct MovedFromAttributeData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData);
// Type: UnityEngine.Scripting.APIUpdating::MovedFromAttributeData
namespace UnityEngine::Scripting::APIUpdating {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10320))
// CS Name: ::UnityEngine.Scripting.APIUpdating::MovedFromAttributeData
struct CORDL_TYPE MovedFromAttributeData : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field className offset 0x0
 __declspec(property(get=__get_className, put=__set_className)) ::StringW  className;

/// @brief Field nameSpace offset 0x8
 __declspec(property(get=__get_nameSpace, put=__set_nameSpace)) ::StringW  nameSpace;

/// @brief Field assembly offset 0x10
 __declspec(property(get=__get_assembly, put=__set_assembly)) ::StringW  assembly;

/// @brief Field classHasChanged offset 0x18
 __declspec(property(get=__get_classHasChanged, put=__set_classHasChanged)) bool  classHasChanged;

/// @brief Field nameSpaceHasChanged offset 0x19
 __declspec(property(get=__get_nameSpaceHasChanged, put=__set_nameSpaceHasChanged)) bool  nameSpaceHasChanged;

/// @brief Field assemblyHasChanged offset 0x1a
 __declspec(property(get=__get_assemblyHasChanged, put=__set_assemblyHasChanged)) bool  assemblyHasChanged;

/// @brief Field autoUdpateAPI offset 0x1b
 __declspec(property(get=__get_autoUdpateAPI, put=__set_autoUdpateAPI)) bool  autoUdpateAPI;

constexpr void __set_className(::StringW  value) ;

constexpr ::StringW& __get_className() ;

constexpr ::StringW const& __get_className() const;

constexpr void __set_nameSpace(::StringW  value) ;

constexpr ::StringW& __get_nameSpace() ;

constexpr ::StringW const& __get_nameSpace() const;

constexpr void __set_assembly(::StringW  value) ;

constexpr ::StringW& __get_assembly() ;

constexpr ::StringW const& __get_assembly() const;

constexpr void __set_classHasChanged(bool  value) ;

constexpr bool& __get_classHasChanged() ;

constexpr bool const& __get_classHasChanged() const;

constexpr void __set_nameSpaceHasChanged(bool  value) ;

constexpr bool& __get_nameSpaceHasChanged() ;

constexpr bool const& __get_nameSpaceHasChanged() const;

constexpr void __set_assemblyHasChanged(bool  value) ;

constexpr bool& __get_assemblyHasChanged() ;

constexpr bool const& __get_assemblyHasChanged() const;

constexpr void __set_autoUdpateAPI(bool  value) ;

constexpr bool& __get_autoUdpateAPI() ;

constexpr bool const& __get_autoUdpateAPI() const;

/// @brief Method Set addr 0x2ce9d9c size 0x38 virtual false final false
inline void Set(bool  autoUpdateAPI, ::StringW  sourceNamespace, ::StringW  sourceAssembly, ::StringW  sourceClassName) ;

// Ctor Parameters [CppParam { name: "className", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "nameSpace", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assembly", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "classHasChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "nameSpaceHasChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "assemblyHasChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "autoUdpateAPI", ty: "bool", modifiers: "", def_value: None }]
constexpr MovedFromAttributeData(::StringW  className, ::StringW  nameSpace, ::StringW  assembly, bool  classHasChanged, bool  nameSpaceHasChanged, bool  assemblyHasChanged, bool  autoUdpateAPI) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MovedFromAttributeData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MovedFromAttributeData()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::Scripting::APIUpdating
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData, "UnityEngine.Scripting.APIUpdating", "MovedFromAttributeData");
