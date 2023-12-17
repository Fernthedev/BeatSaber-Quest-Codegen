#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SerializedType)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
struct SerializedType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::Util::SerializedType);
// Type: UnityEngine.ResourceManagement.Util::SerializedType
namespace UnityEngine::ResourceManagement::Util {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13983))
// CS Name: ::UnityEngine.ResourceManagement.Util::SerializedType
struct CORDL_TYPE SerializedType : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_AssemblyName offset 0x0
 __declspec(property(get=__get_m_AssemblyName, put=__set_m_AssemblyName)) ::StringW  m_AssemblyName;

/// @brief Field m_ClassName offset 0x8
 __declspec(property(get=__get_m_ClassName, put=__set_m_ClassName)) ::StringW  m_ClassName;

/// @brief Field m_CachedType offset 0x10
 __declspec(property(get=__get_m_CachedType, put=__set_m_CachedType)) ::System::Type*  m_CachedType;

/// @brief Field <ValueChanged>k__BackingField offset 0x18
 __declspec(property(get=__get__ValueChanged_k__BackingField, put=__set__ValueChanged_k__BackingField)) bool  _ValueChanged_k__BackingField;

 __declspec(property(get=get_AssemblyName)) ::StringW  AssemblyName;

 __declspec(property(get=get_ClassName)) ::StringW  ClassName;

 __declspec(property(get=get_Value, put=set_Value)) ::System::Type*  Value;

 __declspec(property(get=get_ValueChanged, put=set_ValueChanged)) bool  ValueChanged;

constexpr void __set_m_AssemblyName(::StringW  value) ;

constexpr ::StringW& __get_m_AssemblyName() ;

constexpr ::StringW const& __get_m_AssemblyName() const;

constexpr void __set_m_ClassName(::StringW  value) ;

constexpr ::StringW& __get_m_ClassName() ;

constexpr ::StringW const& __get_m_ClassName() const;

constexpr void __set_m_CachedType(::System::Type*  value) ;

constexpr ::System::Type* __get_m_CachedType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_m_CachedType() const;

constexpr void __set__ValueChanged_k__BackingField(bool  value) ;

constexpr bool& __get__ValueChanged_k__BackingField() ;

constexpr bool const& __get__ValueChanged_k__BackingField() const;

/// @brief Method get_AssemblyName addr 0x2bd2458 size 0x8 virtual false final false
inline ::StringW get_AssemblyName() ;

/// @brief Method get_ClassName addr 0x2bd2460 size 0x8 virtual false final false
inline ::StringW get_ClassName() ;

/// @brief Method ToString addr 0x2bd2468 size 0xb0 virtual true final false
inline ::StringW ToString() ;

/// @brief Method get_Value addr 0x2bd2518 size 0x1f4 virtual false final false
inline ::System::Type* get_Value() ;

/// @brief Method set_Value addr 0x2bd270c size 0xc0 virtual false final false
inline void set_Value(::System::Type*  value) ;

/// @brief Method get_ValueChanged addr 0x2bd27cc size 0x8 virtual false final false
inline bool get_ValueChanged() ;

/// @brief Method set_ValueChanged addr 0x2bd27d4 size 0xc virtual false final false
inline void set_ValueChanged(bool  value) ;

// Ctor Parameters [CppParam { name: "m_AssemblyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_ClassName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_CachedType", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "_ValueChanged_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr SerializedType(::StringW  m_AssemblyName, ::StringW  m_ClassName, ::System::Type*  m_CachedType, bool  _ValueChanged_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SerializedType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SerializedType()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::SerializedType, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::Util
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::SerializedType, "UnityEngine.ResourceManagement.Util", "SerializedType");
