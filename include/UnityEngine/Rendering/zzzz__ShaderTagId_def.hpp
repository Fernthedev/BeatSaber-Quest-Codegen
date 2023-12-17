#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderTagId)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShaderTagId);
// Type: UnityEngine.Rendering::ShaderTagId
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10356))
// CS Name: ::UnityEngine.Rendering::ShaderTagId
struct CORDL_TYPE ShaderTagId : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_Id offset 0x0
 __declspec(property(get=__get_m_Id, put=__set_m_Id)) int32_t  m_Id;

 __declspec(property(get=get_id, put=set_id)) int32_t  id;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ShaderTagId>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Rendering::ShaderTagId>*() ;

constexpr void __set_m_Id(int32_t  value) ;

constexpr int32_t& __get_m_Id() ;

constexpr int32_t const& __get_m_Id() const;

/// @brief Method .ctor addr 0x2cedc88 size 0x20 virtual false final false
inline void _ctor(::StringW  name) ;

/// @brief Method get_id addr 0x2cedca8 size 0x8 virtual false final false
inline int32_t get_id() ;

/// @brief Method set_id addr 0x2cedcb0 size 0x8 virtual false final false
inline void set_id(int32_t  value) ;

/// @brief Method Equals addr 0x2cedcb8 size 0x78 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x2cedd30 size 0x10 virtual true final true
inline bool Equals(::UnityEngine::Rendering::ShaderTagId  other) ;

/// @brief Method GetHashCode addr 0x2cedd40 size 0x20 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "m_Id", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ShaderTagId(int32_t  m_Id) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ShaderTagId(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ShaderTagId()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShaderTagId, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderTagId, "UnityEngine.Rendering", "ShaderTagId");
