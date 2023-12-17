#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRHandTest)
namespace UnityEngine::UI {
class Text;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct __OVRPlugin__HandState;
}
namespace System::Text {
class StringBuilder;
}
namespace GlobalNamespace {
class __OVRPlugin__Mesh;
}
namespace GlobalNamespace {
class __OVRHandTest__BoolMonitor;
}
namespace GlobalNamespace {
class __OVRHandTest____c;
}
namespace GlobalNamespace {
struct __OVRPlugin__Skeleton;
}
namespace GlobalNamespace {
class __OVRHandTest__BoolMonitor__BoolGenerator;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRHandTest;
}
namespace GlobalNamespace {
class __OVRHandTest__BoolMonitor;
}
namespace GlobalNamespace {
class __OVRHandTest__BoolMonitor__BoolGenerator;
}
namespace GlobalNamespace {
class __OVRHandTest____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRHandTest);
MARK_REF_PTR_T(::GlobalNamespace::__OVRHandTest__BoolMonitor);
MARK_REF_PTR_T(::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator);
MARK_REF_PTR_T(::GlobalNamespace::__OVRHandTest____c);
// Type: ::BoolGenerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8117))
// CS Name: ::OVRHandTest::BoolMonitor::BoolGenerator*
class CORDL_TYPE __OVRHandTest__BoolMonitor__BoolGenerator : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27af490 size 0xbc virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27b04e8 size 0x14 virtual true final false
inline bool Invoke() ;

/// @brief Method BeginInvoke addr 0x27b04fc size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27b051c size 0x28 virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRHandTest__BoolMonitor__BoolGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRHandTest__BoolMonitor__BoolGenerator(__OVRHandTest__BoolMonitor__BoolGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRHandTest__BoolMonitor__BoolGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRHandTest__BoolMonitor__BoolGenerator(__OVRHandTest__BoolMonitor__BoolGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRHandTest__BoolMonitor__BoolGenerator()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BoolMonitor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8118))
// CS Name: ::OVRHandTest::BoolMonitor*
class CORDL_TYPE __OVRHandTest__BoolMonitor : public ::System::Object {
public:
// Declarations
using BoolGenerator = ::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field m_name offset 0x10
 __declspec(property(get=__get_m_name, put=__set_m_name)) ::StringW  m_name;

/// @brief Field m_generator offset 0x18
 __declspec(property(get=__get_m_generator, put=__set_m_generator)) ::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator*  m_generator;

/// @brief Field m_prevValue offset 0x20
 __declspec(property(get=__get_m_prevValue, put=__set_m_prevValue)) bool  m_prevValue;

/// @brief Field m_currentValue offset 0x21
 __declspec(property(get=__get_m_currentValue, put=__set_m_currentValue)) bool  m_currentValue;

/// @brief Field m_currentValueRecentlyChanged offset 0x22
 __declspec(property(get=__get_m_currentValueRecentlyChanged, put=__set_m_currentValueRecentlyChanged)) bool  m_currentValueRecentlyChanged;

/// @brief Field m_displayTimeout offset 0x24
 __declspec(property(get=__get_m_displayTimeout, put=__set_m_displayTimeout)) float_t  m_displayTimeout;

/// @brief Field m_displayTimer offset 0x28
 __declspec(property(get=__get_m_displayTimer, put=__set_m_displayTimer)) float_t  m_displayTimer;

constexpr void __set_m_name(::StringW  value) ;

constexpr ::StringW& __get_m_name() ;

constexpr ::StringW const& __get_m_name() const;

constexpr void __set_m_generator(::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator*  value) ;

constexpr ::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator* __get_m_generator() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator*> __get_m_generator() const;

constexpr void __set_m_prevValue(bool  value) ;

constexpr bool& __get_m_prevValue() ;

constexpr bool const& __get_m_prevValue() const;

constexpr void __set_m_currentValue(bool  value) ;

constexpr bool& __get_m_currentValue() ;

constexpr bool const& __get_m_currentValue() const;

constexpr void __set_m_currentValueRecentlyChanged(bool  value) ;

constexpr bool& __get_m_currentValueRecentlyChanged() ;

constexpr bool const& __get_m_currentValueRecentlyChanged() const;

constexpr void __set_m_displayTimeout(float_t  value) ;

constexpr float_t& __get_m_displayTimeout() ;

constexpr float_t const& __get_m_displayTimeout() const;

constexpr void __set_m_displayTimer(float_t  value) ;

constexpr float_t& __get_m_displayTimer() ;

constexpr float_t const& __get_m_displayTimer() const;

static inline ::GlobalNamespace::__OVRHandTest__BoolMonitor* New_ctor(::StringW  name, ::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator*  generator, float_t  displayTimeout) ;

/// @brief Method .ctor addr 0x27af54c size 0x78 virtual false final false
inline void _ctor(::StringW  name, ::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator*  generator, float_t  displayTimeout) ;

/// @brief Method Update addr 0x27b01c8 size 0x94 virtual false final false
inline void Update() ;

/// @brief Method AppendToStringBuilder addr 0x27b025c size 0xd4 virtual false final false
inline void AppendToStringBuilder(ByRef<::System::Text::StringBuilder*>  sb) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRHandTest__BoolMonitor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRHandTest__BoolMonitor(__OVRHandTest__BoolMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRHandTest__BoolMonitor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRHandTest__BoolMonitor(__OVRHandTest__BoolMonitor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRHandTest__BoolMonitor()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRHandTest__BoolMonitor, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8119))
// CS Name: ::OVRHandTest::<>c*
class CORDL_TYPE __OVRHandTest____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__OVRHandTest____c*  value) ;

static inline ::GlobalNamespace::__OVRHandTest____c* getStaticF___9() ;

static inline void setStaticF___9__14_0(::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator* getStaticF___9__14_0() ;

static inline ::GlobalNamespace::__OVRHandTest____c* New_ctor() ;

/// @brief Method .ctor addr 0x27b05a8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Start>b__14_0 addr 0x27b05b0 size 0x58 virtual false final false
inline bool _Start_b__14_0() ;

/// @brief Method <.cctor>b__19_0 addr 0x27b0608 size 0x108 virtual false final false
inline bool __cctor_b__19_0() ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRHandTest____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRHandTest____c(__OVRHandTest____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRHandTest____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRHandTest____c(__OVRHandTest____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRHandTest____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__14_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRHandTest____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRHandTest
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8120))
// CS Name: ::OVRHandTest*
class CORDL_TYPE OVRHandTest : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::__OVRHandTest____c;

using BoolMonitor = ::GlobalNamespace::__OVRHandTest__BoolMonitor;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x178};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x178 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field uiText offset 0x18
 __declspec(property(get=__get_uiText, put=__set_uiText)) ::UnityEngine::UI::Text*  uiText;

/// @brief Field monitors offset 0x20
 __declspec(property(get=__get_monitors, put=__set_monitors)) ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRHandTest__BoolMonitor*>*  monitors;

/// @brief Field data offset 0x28
 __declspec(property(get=__get_data, put=__set_data)) ::System::Text::StringBuilder*  data;

/// @brief Field hs_LH offset 0x30
 __declspec(property(get=__get_hs_LH, put=__set_hs_LH)) ::GlobalNamespace::__OVRPlugin__HandState  hs_LH;

/// @brief Field hs_RH offset 0xa8
 __declspec(property(get=__get_hs_RH, put=__set_hs_RH)) ::GlobalNamespace::__OVRPlugin__HandState  hs_RH;

/// @brief Field skel_LH offset 0x120
 __declspec(property(get=__get_skel_LH, put=__set_skel_LH)) ::GlobalNamespace::__OVRPlugin__Skeleton  skel_LH;

/// @brief Field skel_RH offset 0x140
 __declspec(property(get=__get_skel_RH, put=__set_skel_RH)) ::GlobalNamespace::__OVRPlugin__Skeleton  skel_RH;

/// @brief Field mesh_LH offset 0x160
 __declspec(property(get=__get_mesh_LH, put=__set_mesh_LH)) ::GlobalNamespace::__OVRPlugin__Mesh*  mesh_LH;

/// @brief Field mesh_RH offset 0x168
 __declspec(property(get=__get_mesh_RH, put=__set_mesh_RH)) ::GlobalNamespace::__OVRPlugin__Mesh*  mesh_RH;

/// @brief Field result_skel_LH offset 0x170
 __declspec(property(get=__get_result_skel_LH, put=__set_result_skel_LH)) bool  result_skel_LH;

/// @brief Field result_skel_RH offset 0x171
 __declspec(property(get=__get_result_skel_RH, put=__set_result_skel_RH)) bool  result_skel_RH;

/// @brief Field result_mesh_LH offset 0x172
 __declspec(property(get=__get_result_mesh_LH, put=__set_result_mesh_LH)) bool  result_mesh_LH;

/// @brief Field result_mesh_RH offset 0x173
 __declspec(property(get=__get_result_mesh_RH, put=__set_result_mesh_RH)) bool  result_mesh_RH;

constexpr void __set_uiText(::UnityEngine::UI::Text*  value) ;

constexpr ::UnityEngine::UI::Text* __get_uiText() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> __get_uiText() const;

constexpr void __set_monitors(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRHandTest__BoolMonitor*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRHandTest__BoolMonitor*>* __get_monitors() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRHandTest__BoolMonitor*>*> __get_monitors() const;

constexpr void __set_data(::System::Text::StringBuilder*  value) ;

constexpr ::System::Text::StringBuilder* __get_data() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> __get_data() const;

constexpr void __set_hs_LH(::GlobalNamespace::__OVRPlugin__HandState  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__HandState& __get_hs_LH() ;

constexpr ::GlobalNamespace::__OVRPlugin__HandState const& __get_hs_LH() const;

constexpr void __set_hs_RH(::GlobalNamespace::__OVRPlugin__HandState  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__HandState& __get_hs_RH() ;

constexpr ::GlobalNamespace::__OVRPlugin__HandState const& __get_hs_RH() const;

constexpr void __set_skel_LH(::GlobalNamespace::__OVRPlugin__Skeleton  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__Skeleton& __get_skel_LH() ;

constexpr ::GlobalNamespace::__OVRPlugin__Skeleton const& __get_skel_LH() const;

constexpr void __set_skel_RH(::GlobalNamespace::__OVRPlugin__Skeleton  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__Skeleton& __get_skel_RH() ;

constexpr ::GlobalNamespace::__OVRPlugin__Skeleton const& __get_skel_RH() const;

constexpr void __set_mesh_LH(::GlobalNamespace::__OVRPlugin__Mesh*  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__Mesh* __get_mesh_LH() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPlugin__Mesh*> __get_mesh_LH() const;

constexpr void __set_mesh_RH(::GlobalNamespace::__OVRPlugin__Mesh*  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__Mesh* __get_mesh_RH() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPlugin__Mesh*> __get_mesh_RH() const;

constexpr void __set_result_skel_LH(bool  value) ;

constexpr bool& __get_result_skel_LH() ;

constexpr bool const& __get_result_skel_LH() const;

constexpr void __set_result_skel_RH(bool  value) ;

constexpr bool& __get_result_skel_RH() ;

constexpr bool const& __get_result_skel_RH() const;

constexpr void __set_result_mesh_LH(bool  value) ;

constexpr bool& __get_result_mesh_LH() ;

constexpr bool const& __get_result_mesh_LH() const;

constexpr void __set_result_mesh_RH(bool  value) ;

constexpr bool& __get_result_mesh_RH() ;

constexpr bool const& __get_result_mesh_RH() const;

static inline void setStaticF_prevConnected(::StringW  value) ;

static inline ::StringW getStaticF_prevConnected() ;

static inline void setStaticF_controllers(::GlobalNamespace::__OVRHandTest__BoolMonitor*  value) ;

static inline ::GlobalNamespace::__OVRHandTest__BoolMonitor* getStaticF_controllers() ;

/// @brief Method Start addr 0x27af1ac size 0x2e4 virtual false final false
inline void Start() ;

/// @brief Method Update addr 0x27af5c4 size 0xc04 virtual false final false
inline void Update() ;

static inline ::GlobalNamespace::OVRHandTest* New_ctor() ;

/// @brief Method .ctor addr 0x27b0330 size 0x84 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRHandTest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRHandTest(OVRHandTest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRHandTest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRHandTest(OVRHandTest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRHandTest()  = default;
public:


// Fields

// Static field prevConnected

// Static field controllers


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHandTest, 0x178>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRHandTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHandTest*, "", "OVRHandTest");
NEED_NO_BOX(::GlobalNamespace::__OVRHandTest__BoolMonitor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRHandTest__BoolMonitor*, "", "OVRHandTest/BoolMonitor");
NEED_NO_BOX(::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator*, "", "OVRHandTest/BoolMonitor/BoolGenerator");
NEED_NO_BOX(::GlobalNamespace::__OVRHandTest____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRHandTest____c*, "", "OVRHandTest/<>c");
